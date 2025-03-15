#include "Complex.h"
#include <cmath>
#include <string>

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
    this->_real /= complex._real;
    this->_complex /= complex._complex;
    return *this;
}
std::ostream& operator<<(std::ostream& os, const Complex& complex)
{
    if (complex._complex >= 0)
    {
        os << complex._real << " + " << complex._complex << "i";
    }
    else
    {
        os << complex._real << " - " << static_cast<int>(std::abs(complex._complex)) << "i";
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
