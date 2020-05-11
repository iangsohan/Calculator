#include<iostream>
#include<string>
#include<stack>
#include<unordered_map>
#include<algorithm>
#include "mathematics.h"
using namespace std;

unordered_map<char, int> pemdas {{'+',1},{'-',1},{'*',2},{'/',2},{'^',3}};

string infix(string s) {
  string ifix = "";
  stack<char> value;
  stack<char> accum;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == ' ') i++;
    if (pemdas.count(s[i]) == 0) value.push(s[i]);
    else if (accum.empty()) accum.push(s[i]);
    else if (pemdas[accum.top()] <= pemdas[s[i]]) {
      accum.push(s[i]);
    } else {
        while (pemdas[accum.top()] > pemdas[s[i]]) {
          value.push(accum.top());
          accum.pop();
          accum.push(s[i]);
        }
    }
  }
  while (!accum.empty()) {
    value.push(accum.top());
    accum.pop();
  }
  while (!value.empty()) {
    ifix += value.top();
    ifix += ' ';
    value.pop();
  }
  reverse(ifix.begin(), ifix.end());
  cout << ifix << endl;
  return ifix;
}

int calculate() {
  Mathematics s;
  string token;
  getline(cin, token);
  token = infix(token);
  for (int i = 0; i < token.length(); i++) {
    if (token[i] == ' ') i++;
    if (token[i] == '+') {
      s.add();
    } else if (token[i] == '-') {
      s.subtract();
    } else if (token[i] == '*') {
      s.multiply();
    } else if (token[i] == '/') {
      s.divide();
    } else if (token[i] == '^') {
      s.exponent();
    } else if (token[i] == '~') {
      s.negate();
    } else {
      string num = "";
      num += token[i];
      s.push(stoi(num));
    }
  }
  cout << "RESULT: ";
  return s.top();
}

int main() {
  cout << calculate();
  cout << endl;
  return 0;
}