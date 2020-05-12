#include<iostream>
#include<stack>
#include "mathematics.h"

using namespace std;

Mathematics::Mathematics() {
  stack<float> math;
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

void Mathematics::push(float x) {
  math.push(x);
}

void Mathematics::add() {
  float x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y + x);
}

void Mathematics::sub() {
  float x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y - x);
}

void Mathematics::mul() {
  float x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y * x);
}

void Mathematics::div() {
  float x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y / x);
}

float pow(float base, float expo) {
  if(expo > 1){
    expo = expo - 1;
    return pow(base, expo) * base;
  } else if (expo == 0){
    return 1;
  } return base;
}

void Mathematics::exp() {
  float x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(pow(y, x));
}

float Mathematics::top() const{
  if(!empty()) {
    return math.top();
  } else {
    exit(-1);
    return 0;
  }
}
