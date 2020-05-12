#include<iostream>
#include<stack>
#include<unordered_map>
#include<vector>
#include "mathematics.h"
using namespace std;

unordered_map<string, int> pemdas {{"+",1},{"-",1},{"*",2},{"/",2},{"^",3},{"(",4},{")", 4}};

vector<string> infix(vector<string> s, string inpost) {
  if (inpost == "POSTFIX") return s;
  vector<string> value;
  stack<string> accum;
  for (int i = 0; i < s.size(); i++) {
    if (pemdas.count(s[i]) == 0) value.push_back(s[i]);
    else if (s[i] == ")") {
      while (accum.top() != "(") {
        value.push_back(accum.top());
        accum.pop();
      }
      accum.pop();
    }
    else if (accum.empty()) accum.push(s[i]);
    else if (pemdas[accum.top()] < pemdas[s[i]]) accum.push(s[i]);
    else {
      while (pemdas[accum.top()] >= pemdas[s[i]]) {
        if (accum.top() == "(") break;
        value.push_back(accum.top());
        accum.pop();
        if (accum.empty()) break;
      }
      accum.push(s[i]);
    }
  }
  while (!accum.empty()) {
    value.push_back(accum.top());
    accum.pop();
  }
  return value;
}

float calculate() {
  Mathematics s;
  string token;
  string inpost;
  vector<string> value;
  while(cin >> token) value.push_back(token);
  value = infix(value, "INFIX");
  for (int i = 0; i < value.size(); i++) {
    if (value[i] == "+") s.add();
    else if (value[i] == "-") s.sub();
    else if (value[i] == "*") s.mul();
    else if (value[i] == "/") s.div();
    else if (value[i] == "^") s.exp();
    else s.push(stof(value[i]));
  }
  cout << "RESULT: ";
  return s.top();
}

int main() {
  cout << calculate();
  cout << endl;
  return 0;
}