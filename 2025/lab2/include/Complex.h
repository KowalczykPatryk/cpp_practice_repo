#pragma once
#include <string>
#include <iostream>

class Complex{
private:
    int _real;
    int _complex;
public:
    Complex();
    Complex(int real, int complex);
    int getReal() const;
    int getComplex() const;
    operator double();
    explicit operator std::string();
    Complex& operator+(const Complex& complex);
    Complex& operator*(const Complex& complex);
    Complex& operator-(const Complex& complex);
    Complex& operator/(const Complex& complex);
    friend std::ostream& operator<<(std::ostream& os, const Complex& complex);

};