#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>
#include <string>
#include "calculatorgui.h"
#include "ui_calculatorgui.h"
#include "mathematics.h"
using namespace std;

unordered_set<string> operators {"+","–","*","/","^","log","ln","sin","cos","tan","(",")","-"};
unordered_set<string> beginners {"log","ln","sin","cos","tan","(","e","π","ans"};
unordered_set<string> finishers {"+","–","*","/","^"};
unordered_set<string> constants {"e","π","ans"};

unordered_map<string, int> pemdas {{"+",1},{"–",1},{"*",2},{"/",2},{"^",3},{"-",4},
                                   {"log",5},{"ln",5},{"sin",5},{"cos",5},{"tan",5},{"(",6},{")",6}};

double ans = 0;
string mode = "RADIANS";
vector<string> values;

vector<string> infix(vector<string> s) {
    vector<string> postfix, accum;
    for (int i = 0; i < (int)s.size(); i++) {
        if (!pemdas.count(s[i]))
            postfix.push_back(s[i]);
        else if (accum.empty())
            accum.push_back(s[i]);
        // Interior Parentheses Equation
        else if (s[i] == ")") {
            while (accum.back() != "(")
                postfix.push_back(accum.back()), accum.pop_back();
            accum.pop_back();
        } else if (pemdas[accum.back()] < pemdas[s[i]])
            accum.push_back(s[i]);
        else {
            while (pemdas[accum.back()] >= pemdas[s[i]]) {
                // Ignores Opening Parentheses
                if (accum.back() == "(")
                    break;
                postfix.push_back(accum.back());
                accum.pop_back();
                if (accum.empty())
                    break;
            }
            accum.push_back(s[i]);
        }
    }
    while (!accum.empty()) {
        postfix.push_back(accum.back());
        accum.pop_back();
    }
    return postfix;
}

void calculate(double ans, vector<string> v, string mode) {
    Mathematics m;
    string token;
    if (v.empty())
        throw ans;
    vector<string> postfix = infix(v);
    for (int i = 0; i < (int)postfix.size(); i++) {
        if (postfix[i] == "+") m.add();
        else if (postfix[i] == "–") m.sub();
        else if (postfix[i] == "*") m.mul();
        else if (postfix[i] == "/") m.div();
        else if (postfix[i] == "-") m.neg();
        else if (postfix[i] == "^") m.exp();
        else if (postfix[i] == "log") m.log();
        else if (postfix[i] == "ln") m.ln();
        else if (postfix[i] == "sin") m.sin(mode);
        else if (postfix[i] == "cos") m.cos(mode);
        else if (postfix[i] == "tan") m.tan(mode);
        else if (postfix[i] == "e") m.push(2.71828183);
        else if (postfix[i] == "π") m.push(3.1415927);
        else if (postfix[i] == "ans") m.push(ans);
        else {
            // Multiple Decimal Error
            if (postfix[i].find_first_of(".") != postfix[i].find_last_of("."))
                throw "ERROR";
            m.push(stod(postfix[i]));
        }
    }
    if (m.size() != 1)
        throw "ERROR";
    throw m.top();
}

CalculatorGUI::CalculatorGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculatorGUI)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(ans));

    for (int i = 0; i <= 30; i++) {
        QString butName = "Button" + QString::number(i);
        buttons[i] = CalculatorGUI::findChild<QPushButton *>(butName);
        connect(buttons[i], SIGNAL(released()), this, SLOT(ButtonPressed()));
    }
}

CalculatorGUI::~CalculatorGUI() {
    delete ui;
}

void CalculatorGUI::ButtonPressed() {
    QPushButton *button = (QPushButton *)sender();
    QString butVal = button->text();
    QString dispVal;
    values.push_back(butVal.toStdString());
    // Previous Answer ASsumption
    if (values.size() == 1) {
        if (finishers.count(butVal.toStdString())) {
            values.pop_back();
            values.push_back("ans");
            values.push_back(butVal.toStdString());
        } else if (butVal == "⇐")
            butVal = "AC";
    }
    // Special Buttons
    if (butVal == "=") {
        values.pop_back();
        try {
            calculate(ans, values, mode);
        } catch (double x) {
            ans = x;
            dispVal = QString::number(ans);
        } catch (...) {
            dispVal = "ERROR";
        }
        values.clear();
    } else if (butVal == "AC") {
        ans = 0;
        values.clear();
        dispVal = QString::number(ans);
    } else if (butVal == "MODE") {
        values.clear();
        if (mode == "RADIANS")
            mode = "DEGREES";
        else
            mode = "RADIANS";
        dispVal = QString::fromStdString(mode);
    } else {
        if (butVal == "⇐") {
            values.pop_back();
            // Backspace Digits
            if (!operators.count(values.back()) && !constants.count(values.back())) {
                values.back().pop_back();
                if (!values.back().length())
                    values.pop_back();
            } else
                values.pop_back();
            if (!values.size())
                dispVal = "0";
        } else if (values.size() > 1) {
            // Negation
            if (values[values.size()-2] == "-" && butVal.toStdString() == "-")
                values.pop_back();
            // Implied Multiplication
            else if ((beginners.count(butVal.toStdString()) && (!operators.count(values[values.size()-2]) || values[values.size()-2] == ")")) ||
                    ((constants.count(values[values.size()-2]) || values[values.size()-2] == ")") && !operators.count(butVal.toStdString()))) {
                    values.pop_back();
                    values.push_back("*");
                    values.push_back(butVal.toStdString());
            // Number Construction
            } else if (!operators.count(butVal.toStdString()) && !operators.count(values[values.size()-2])) {
                values.pop_back();
                values.back() += butVal.toStdString();
            }
        }
        // Operator Parentheses
        if (operators.count(butVal.toStdString()) && butVal.toStdString() != "–" && butVal.toStdString().length() > 1)
            values.push_back("(");
        // Display Value
        for (int i = 0; i < (int)values.size(); i++) {
            if (values[i] == "-")
                dispVal += QString::fromStdString(values[i]);
            else
                dispVal += QString::fromStdString(values[i]) + " ";
        }
    }
    ui->Display->setText(dispVal);
}
