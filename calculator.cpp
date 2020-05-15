#include<iostream>
#include<stack>
#include<unordered_map>
#include<vector>
#include "mathematics.h"
using namespace std;

// Variable mapping operators to their appropriate value order.
unordered_map<string, int> pemdas {{"+",1},{"-",1},{"*",2},{"/",2},{"^",3},
                                   // logarithmic
                                   {"log",4},{"ln",4},
                                   // trigonometric
                                   {"sin",4},{"cos",4},{"tan",4},
                                   // high-value
                                   {"(",5},{")",5},{"(-)",5},{"=",6}};

// Converts vector from infix to postfix.
vector<string> infix(vector<string> s) {
    vector<string> postfix;
    stack<string> accum;
    for (int i = 0; i < s.size(); i++) {
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

// Determines the necessary calculation for each operator and value.
double calculate(double ans) {
    Mathematics s;
    string token;
    vector<string> postfix;
    while (cin >> token && token != "=")
        postfix.push_back(token);
    postfix = infix(postfix);
    for (int i = 0; i < postfix.size(); i++) {
        // Operators
        if (postfix[i] == "+") s.add();
        else if (postfix[i] == "-") s.sub();
        else if (postfix[i] == "*") s.mul();
        else if (postfix[i] == "/") s.div();
        else if (postfix[i] == "(-)") s.neg(); 
        else if (postfix[i] == "^") s.exp(); 
        else if (postfix[i] == "log") s.log();
        else if (postfix[i] == "ln") s.ln();
        else if (postfix[i] == "sin") s.sin();
        else if (postfix[i] == "cos") s.cos();
        else if (postfix[i] == "tan") s.tan();
        // Constants
        else if (postfix[i] == "e") s.push(2.7182818284);
        else if (postfix[i] == "pi") s.push(3.141592653);
        else if (postfix[i] == "ans") s.push(ans);
        else s.push(stof(postfix[i]));
    }
    return s.top();
}

// Calls calculate until user is finished.
int main() {
    string token;
    double ans = 0.0;
    while (true) {
        ans = calculate(ans);
        cout << ans << endl;
    }
    return 0;
}