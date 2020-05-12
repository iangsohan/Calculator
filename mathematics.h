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
  void push(float x);
  void add();
  void sub();
  void mul();
  void div();
  void exp();
  float top() const;

 private:
  stack<float> math;
};

#endif
