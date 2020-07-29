# Calculator

## Introduction

"Calculator" is a scientific calculator GUI designed with Qt-based C++. The GUI is designed for Windows computers, but the outline code for the calculator functions is also provided. Instead of the typical computer/phone calculator that allows only one operation at a time, "Calculator" allows a continuous equation to be calculated, given a valid function.

## Code Samples

Fractional Exponents:
```
double fpow(double x, double n) {
    double power = 0;
    double b = n * loge(x);
    for (int i = 0; i < 19; i++)
        power += (pow(b, i) / fac(i));
    return power;
}
```
<br />

Natural Logarithm:
```
double loge(double val) {
    return log10(val) / log10(e);
}
```
<br />

Common Logarithm:
```
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
```

## Installation

Windows Executable:
1. Download [ScientificCalc.exe](https://github.com/iangsohan/Calculator/blob/master/ScientificCalc.exe?raw=true)
2. Perform Calculations in Infix Notation

Ubuntu Linux:
1. Download [calculator.cpp](https://github.com/iangsohan/Calculator/blob/master/calculator.cpp), [mathematics.cpp](https://github.com/iangsohan/Calculator/blob/master/mathematics.cpp), and [mathematics.h](https://github.com/iangsohan/Calculator/blob/master/mathematics.h) into the same folder.
2. Open Ubuntu Linux terminal.
3. ``clang++ calculator.cpp mathematics.cpp``
4. Separate Numbers and Operators with Spaces
5. Press ``Enter`` After ``=``
```
-5 * log ( 10 ) - sin ( pi ) + 6 ^ ( 1 / 2 ) =
-2.55051
```
6. Use ``Ctrl D`` to Terminate

Qt Open Source:
1. Download [Qt Open Source Installer](https://www.qt.io/download-thank-you?hsLang=en) Installer
2. Select Most Recent Version to Download
3. Download [CalculatorQt](https://github.com/iangsohan/Calculator/tree/master/CalculatorQt) Folder
4. Open "CalculatorGUI" Project
5. Select "Release" and "Build"

## License

[MIT](https://choosealicense.com/licenses/mit/)
