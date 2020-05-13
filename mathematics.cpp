#include<iostream>
#include<stack>
#include "mathematics.h"

using namespace std;

double pow(double base, double expo);
double log10(double val, int n);
double loge(double val);
double fpow(double x, double n);
double fac(double val);

double e = 2.7182818284;
double pi = 3.141592653;

Mathematics::Mathematics() {
  stack<double> math;
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

void Mathematics::push(double x) {
  math.push(x);
}

void Mathematics::add() {
  double x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y + x);
}

void Mathematics::sub() {
  double x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y - x);
}

void Mathematics::mul() {
  double x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y * x);
}

void Mathematics::div() {
  double x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(y / x);
}

double fac(double val) {
  if (val == 0) return 1.0;
  return val * fac(val-1);
}

double fpow(double x, double n) {
  double power = 0;
  double b = n * loge(x);
  for (int i = 0; i < 19; i++) {
    power += (pow(b, i) / fac(i));
  }
  return power;
}

double pow(double x, double n) {
  int nInt = n;
  if (nInt != n) return fpow(x, n);
  bool negative = false;
  if (n < 0) negative = true, n *= -1;
  if (n >= 1) {
      n -= 1;
      double power = pow(x,n) * x;
      return negative ? 1/power : power;
  }
  return 1;
}

void Mathematics::exp() {
  double x, y;
  x = top();
  pop();
  y = top();
  pop();
  push(pow(y, x));
}

double log10(double val, int n = 7) {
  bool negative = false;
  int digit = 0.0;
  if (val < 1 && n == 7) negative = true, val = 1/val;
  if (n == 0) return 0.0;
  val = pow(val, 10);
  while (val > 10) {
    val /= 10.0;
    digit += 1;
  }
  double logarithm = digit + log10(val, n-1);
  return negative ? logarithm/-10.0 : logarithm/10.0;
}

void Mathematics::log() {
  double x;
  x = top();
  pop();
  push(log10(x));
}

double loge(double val) {
  return log10(val) / log10(e);
}

void Mathematics::ln() {
  double x;
  x = top();
  pop();
  push(loge(x));
}

double sine(double x) {
  double degrees = 0.0;
  x = x * pi / 180;
  for (int i = 1; i < 20; i += 4) {
    degrees += (pow(x,i) / fac(i));
    degrees -= (pow(x,i+2) / fac(i+2));
  }
  return degrees;
}

void Mathematics::sin() {
  double x;
  x = top();
  pop();
  push(sine(x));
}

double cosine(double x) {
  double degrees = 0.0;
  x = x * pi / 180;
  for (int i = 0; i < 19; i += 4) {
    degrees += (pow(x,i) / fac(i));
    degrees -= (pow(x,i+2) / fac(i+2));
  }
  return degrees;
}

void Mathematics::cos() {
  double x;
  x = top();
  pop();
  push(cosine(x));
}

void Mathematics::tan() {
  double x;
  x = top();
  pop();
  push(sine(x)/cosine(x));
}

double Mathematics::top() const{
  if(!empty()) {
    return math.top();
  } else {
    exit(-1);
    return 0;
  }
}
