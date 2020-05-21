#include <iostream>
#include <stack>
#include "mathematics.h"

using namespace std;

double e = 2.71828183;
double pi = 3.1415927;

Mathematics::Mathematics() {
    stack<double> math;
}

// Factorial
double fac(double val) {
    if (!val)
        return 1.0;
    return val * fac(val-1);
}

// Modulus
double fmod(double x, double y) {
    if (!y)
        throw false;
    return ((x/y)-(int)(x/y))*y;
}

bool Mathematics::empty() const {
    return !math.size();
}

int Mathematics::size() {
    return math.size();
}

void Mathematics::pop() {
    if (!empty())
         math.pop();
    else
        throw false;
}

void Mathematics::push(double x) {
    math.push(x);
}

// Addition
void Mathematics::add() {
    double x, y;
    x = top();
    pop();
    y = top();
    pop();
    push(y + x);
}

// Subtraction
void Mathematics::sub() {
    double x, y;
    x = top();
    pop();
    y = top();
    pop();
    push(y - x);
}

// Multiplication
void Mathematics::mul() {
    double x, y;
    x = top();
    pop();
    y = top();
    pop();
    push(y * x);
}

// Division
void Mathematics::div() {
    double x, y;
    x = top();
    pop();
    y = top();
    pop();
    if (!x)
        throw false;
    push(y / x);
}

// Negation
void Mathematics::neg() {
    double x;
    x = top();
    pop();
    x = x * (-1);
    push(x);
}

double pow(double x, double n);
double loge(double val);

// Exponents: Fraction
double fpow(double x, double n) {
    double power = 0;
    double b = n * loge(x);
    for (int i = 0; i < 19; i++)
        power += (pow(b, i) / fac(i));
    return power;
}

// Exponents: Integer
double pow(double x, double n) {
    int nInt = n;
    if (nInt != n) return fpow(x, n);
    int iN = n;
    if (iN == 0) return 1;
    if (iN == 1) return x;
    if (iN == -1) return 1/x;
    double power = iN > 0 ? x : 1/x;
    return pow(x*x, iN/2) * (iN % 2 != 0 ? power : 1);
}

// Exponents
void Mathematics::exp() {
    double x, y;
    x = top();
    pop();
    y = top();
    pop();
    push(pow(y, x));
}

// Log: Helper
double log10(double val, int n = 7) {
    bool negative = false;
    int digit = 0.0;
    if (val < 1 && n == 7) {
        negative = true;
        val = 1/val;
    }
    if (n == 0)
        return 0.0;
    val = pow(val, 10);
    while (val > 10) {
        val /= 10.0;
        digit += 1;
    }
    double logarithm = digit + log10(val, n-1);
    return negative ? logarithm/-10.0 : logarithm/10.0;
}

// Log
void Mathematics::log() {
    double x;
    x = top();
    pop();
    if (x <= 0)
        throw false;
    push(log10(x));
}

// Ln: Helper
double loge(double val) {
    return log10(val) / log10(e);
}

// Ln
void Mathematics::ln() {
    double x;
    x = top();
    pop();
    if (x <= 0)
        throw false;
    push(loge(x));
}

// SIN: Helper
double sine(double x, string mode) {
    double degrees = 0.0;
    if (!fmod(x,pi))
        return 0;
    for (int i = 1; i < 50; i += 4) {
        degrees += (pow(x,i) / fac(i));
        degrees -= (pow(x,i+2) / fac(i+2));
    }
    return degrees;
}

// SIN
void Mathematics::sin(string mode) {
    double x;
    x = top();
    pop();
    push(sine(x, mode));
}

// COS: Helper
double cosine(double x, string mode) {
    double degrees = 0.0;
    if (!fmod(pi/2+x,pi))
        return 0;
    for (int i = 0; i < 49; i += 4) {
        degrees += (pow(x,i) / fac(i));
        degrees -= (pow(x,i+2) / fac(i+2));
    }
    return degrees;
}

// COS
void Mathematics::cos(string mode) {
    double x;
    x = top();
    pop();
    push(cosine(x, mode));
}

// TAN
void Mathematics::tan(string mode) {
    double x;
    x = top();
    pop();
    double c = cosine(x, mode);
    if (!c)
        throw false;
    push(sine(x, mode)/c);
}

double Mathematics::top() const{
    if (!empty())
        return math.top();
    else
        throw false;
}
