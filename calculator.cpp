#include <iostream>
#include <unordered_map>
#include <vector>
#include "mathematics.h"
using namespace std;

unordered_map<string, int> pemdas {{"+",1},{"-",1},{"*",2},{"/",2},{"^",3},{"~",4},
                                   {"log",5},{"ln",5},{"sin",5},{"cos",5},{"tan",5},{"(",6},{")",6}};

// Converts Infix to Postfix
vector<string> infix(vector<string> s) {
    vector<string> postfix, accum;
    for (int i = 0; i < s.size(); i++) {
        if (!pemdas.count(s[i]))
            postfix.push_back(s[i]);
        else if (accum.empty())
            accum.push_back(s[i]);
        // Interior Parentheses Equation
        else if (s[i] == ")") {
            while (accum.back() != "(") {
                postfix.push_back(accum.back());
                accum.pop_back();
            }
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

void calculate(double ans) {
    Mathematics s;
    string token;
    vector<string> postfix;
    while (cin >> token && token != "=")
        postfix.push_back(token);
    postfix = infix(postfix);
    for (int i = 0; i < postfix.size(); i++) {
        if (postfix[i] == "+") s.add();
        else if (postfix[i] == "-") s.sub();
        else if (postfix[i] == "*") s.mul();
        else if (postfix[i] == "/") s.div();
        else if (postfix[i] == "^") s.exp();
        else if (postfix[i] == "~") s.neg(); 
        else if (postfix[i] == "log") s.log();
        else if (postfix[i] == "ln") s.ln();
        else if (postfix[i] == "sin") s.sin("RADIANS");
        else if (postfix[i] == "cos") s.cos("RADIANS");
        else if (postfix[i] == "tan") s.tan("RADIANS");
        else if (postfix[i] == "e") s.push(2.71828183);
        else if (postfix[i] == "pi") s.push(3.1415927);
        else if (postfix[i] == "ans") s.push(ans);
        else {
            if (postfix[i].find_first_of(".") != postfix[i].find_last_of("."))
                throw false;
            if (postfix[i].find_first_of("-") != postfix[i].find_last_of("-"))
                throw false;
            s.push(stod(postfix[i]));
        }
    }
    if (s.size() != 1)
        throw false;
    throw s.top();
}

int main() {
    bool x = true;
    double ans = 0.0;
    while (x) {
        try {
            calculate(ans);
        } catch (double x) {
            ans = x;
            cout << ans << endl;
        } catch (...) {
            return 0;
        }  
    }
    return 0;
}