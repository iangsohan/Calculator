#ifndef MATHEMATICS_H
#define MATHEMATICS_H

#include<iostream>
#include<stack>
using namespace std;

class Mathematics {
 public:
  Mathematics();

  bool empty() const;
  int size();
  void pop();
  void push(double x);
  void add();
  void sub();
  void mul();
  void div();
  void neg();
  void exp();
  void log();
  void ln();
  void sin();
  void cos();
  void tan();
  double top() const;

 private:
  stack<double> math;
};

#endif
