#include<iostream>
#include<stack>
#include "mathematics.h"

using namespace std;

Mathematics::Mathematics() {
  stack<int> math;
}

bool Mathematics::empty() const {
  return (math.size() == 0);
}

void Mathematics::pop() {
  if(!empty()) {
    math.pop();
  } else {
    exit(-1);
      }
}

void Mathematics::push(int x) {
  math.push(x);
  }

void Mathematics::add() {
  int x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y + x);
}

void Mathematics::subtract() {
  int x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y - x);
}

void Mathematics::multiply() {
  int x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y * x);
}

void Mathematics::divide() {
  int x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y / x);
}

int power(int base, int expo) {
  if(expo > 1){
    expo = expo - 1;
    return power(base, expo) * base;
  } else if (expo == 0){
    return 1;
  } return base;
}

void Mathematics::exponent() {
  int x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(power(y, x));
}

void Mathematics::negate() {
  int x;
  x = top();
  pop();
  x = x * (-1);
  push(x);
}

int Mathematics::top() const{
  if(!empty()) {
    return math.top();
  } else {
    exit(-1);
    return 0;
  }
}
