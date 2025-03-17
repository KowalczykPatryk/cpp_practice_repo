#include "Complex.h"
#include <cmath>
#include <string>
#include <iomanip>

Complex::Complex(): _real(0), _complex(0){}
Complex::Complex(int real, int complex): _real(real), _complex(complex){}
Complex::operator double()
{
    return sqrt(_real*_real+_complex*_complex);
}
Complex::operator std::string()
{
    if (_complex >= 0)
    {
        return std::to_string(_real) + " + " + std::to_string(_complex) + "i";
    }
    else
    {
        return std::to_string(_real) + " - " + std::to_string(static_cast<int>(std::fabs(_complex))) + "i";
    }
    
}
Complex& Complex::operator+(const Complex& complex)
{
    this->_real += complex._real;
    this->_complex += complex._complex;
    return *this;
}
Complex& Complex::operator*(const Complex& complex)
{

    this->_real = this->_real*complex._real - this->_complex*complex._complex;
    this->_complex = this->_real*complex._complex+this->_complex*complex._real;
    return *this;

}
Complex& Complex::operator-(const Complex& complex)
{
    this->_real -= complex._real;
    this->_complex -= complex._complex;
    return *this;
}
Complex& Complex::operator/(const Complex& complex)
{
    int denominator = pow(complex._real,2) + pow(complex._complex,2);
    *this = (*this)*complex;
    this->_real /= denominator;
    this->_complex /= denominator;
    return *this;
}
std::ostream& operator<<(std::ostream& os, const Complex& complex)
{
    if (complex._complex >= 0)
    {
        os << std::fixed << std::setprecision(0) << complex._real << " + " << complex._complex << "i";
    }
    else
    {
        os << std::fixed << std::setprecision(0) << complex._real << " - " << std::abs(complex._complex) << "i";
    }
    return os;
}
int Complex::getReal() const
{
    return _real;
}
int Complex::getComplex() const
{
    return _complex;
}
double Complex::operator()(std::function<double(const Complex& complex)> fun)
{
    return fun(*this);
}
