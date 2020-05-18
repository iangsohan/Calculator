#include<iostream>
#include "calculatorgui.h"
#include "ui_calculatorgui.h"
#include "mathematics.h"
#include<unordered_set>
#include<unordered_map>
#include<vector>
#include<stack>
using namespace std;

unordered_set<string> operators {"+","－","*","/","^","log","ln","sin","cos","tan","(",")","-"};
unordered_set<string> beginners {"log","ln","sin","cos","tan","(","e","π","ans"};
unordered_set<string> finishers {"+","－","*","/","^"};
unordered_set<string> parenthes {"log","ln","sin","cos","tan"};
unordered_set<string> constants {"e","π","ans"};

unordered_map<string, int> pemdas {{"+",1},{"－",1},{"*",2},{"/",2},{"^",3},{"-",4},{"log",5},{"ln",5},
                                   {"sin",5},{"cos",5},{"tan",5},{"(",6},{")",6},{"=",7}};

double ans = 0;
string mode = "RADIANS";
vector<string> values;

vector<string> infix(vector<string> s) {
    vector<string> postfix;
    stack<string> accum;
    for (int i = 0; i < (int)s.size(); i++) {
        if (!pemdas.count(s[i]))
            postfix.push_back(s[i]);
        else if (accum.empty())
            accum.push(s[i]);
        // When a closing parentheses is found, every operator after the
        // opening parentheses is added to the value postfix vector.
        else if (s[i] == ")") {
            while (accum.top() != "(")
                postfix.push_back(accum.top()), accum.pop();
            accum.pop();
        } else if (pemdas[accum.top()] < pemdas[s[i]])
            accum.push(s[i]);
        else {
            while (pemdas[accum.top()] >= pemdas[s[i]]) {
                // Ignores opening parentheses once added to accumulator.
                if (accum.top() == "(") break;
                postfix.push_back(accum.top());
                accum.pop();
                if (accum.empty()) break;
            }
            accum.push(s[i]);
        }
    }
    while (!accum.empty())
        postfix.push_back(accum.top()), accum.pop();
    return postfix;
}

void calculate(double ans, vector<string> x, string mode) {
    Mathematics s;
    string token;
    if (x.empty())
        throw ans;
    vector<string> postfix = infix(x);
    for (int i = 0; i < (int)postfix.size(); i++) {
        if (postfix[i] == "+") s.add();
        else if (postfix[i] == "－") s.sub();
        else if (postfix[i] == "*") s.mul();
        else if (postfix[i] == "/") s.div();
        else if (postfix[i] == "-") s.neg();
        else if (postfix[i] == "^") s.exp();
        else if (postfix[i] == "log") s.log();
        else if (postfix[i] == "ln") s.ln();
        else if (postfix[i] == "sin") s.sin(mode);
        else if (postfix[i] == "cos") s.cos(mode);
        else if (postfix[i] == "tan") s.tan(mode);
        else if (postfix[i] == "e") s.push(2.7182818284);
        else if (postfix[i] == "π") s.push(3.1415927);
        else if (postfix[i] == "ans") s.push(ans);
        else {
            // Decimal Problem
            if (postfix[i].find_first_of(".") != postfix[i].find_last_of("."))
                throw "ERROR";
            s.push(stod(postfix[i]));
        }
    }
    if (s.size() != 1)
        throw "ERROR";
    else
        throw s.top();
}

CalculatorGUI::CalculatorGUI(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::CalculatorGUI)
{
    ui->setupUi(this);

    ui->Display->setText(QString::number(ans));

    QPushButton *buttons[30];
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

    if (values.size() == 1) {
        if (finishers.count(butVal.toStdString())) {
            values.pop_back();
            values.push_back("ans");
            values.push_back(butVal.toStdString());
        } else if (butVal == "⇐")
            butVal = "AC";
    }

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
            values.pop_back();
            if (!values.size())
                dispVal = "0";
        } else if (values.size() > 1) {

            // Negation Problem
            if (finishers.count(butVal.toStdString()) && values[values.size()-2] == "-") {
                values.pop_back();
            } else if (!operators.count(values[values.size()-2]) && butVal.toStdString() == "-") {
                values.pop_back();
            }

            // Implied Multiplication
            else if (beginners.count(butVal.toStdString())) {
                if (!operators.count(values[values.size()-2]) || values[values.size()-2] == ")") {
                    values.pop_back();
                    values.push_back("*");
                    values.push_back(butVal.toStdString());
                }
            } else if (constants.count(values[values.size()-2]) || values[values.size()-2] == ")") {
                if (!operators.count(butVal.toStdString())) {
                    values.pop_back();
                    values.push_back("*");
                    values.push_back(butVal.toStdString());
                }

            // Entering Numbers
            } else if (!operators.count(butVal.toStdString())) {
                if (!operators.count(values[values.size()-2])/* || values[values.size()-2] == "-"*/) {
                    values.pop_back();
                    values.back() += butVal.toStdString();
                }
            }

        }

        if (parenthes.count(butVal.toStdString()))
            values.push_back("(");
        for (int i = 0; i < (int)values.size(); i++) {
            if (values[i] == "-")
                dispVal += QString::fromStdString(values[i]);
            else
                dispVal += QString::fromStdString(values[i]) + " ";
        }
    }
    ui->Display->setText(dispVal);
}
