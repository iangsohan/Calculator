#ifndef MATHEMATICS_H
#define MATHEMATICS_H

#include<iostream>
#include<stack>
using namespace std;

class Mathematics {
 public:
  Mathematics();

  bool empty() const;
  void pop();
  void push(int x);
  void add();
  void subtract();
  void multiply();
  void divide();
  void exponent();
  void negate();
  int top() const;

 private:
  stack<int> math;
};

#endif
