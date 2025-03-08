#include "Measurement.h"
#include <iostream>

Measurement::Measurement(double value): _value(value){}
double Measurement::GetValue() const
{
    return _value;
}
void Measurement::SetValue(double value)
{
    _value = value;
}
Measurement::operator double() const
{
    return _value;
}
Measurement& Measurement::operator+(Measurement& measurement)
{
    this->_value += measurement._value;
    return *this;
}
std::ostream& operator<<(std::ostream& os, const Measurement& measurement)
{
    os << measurement.GetValue();
    return os;
}