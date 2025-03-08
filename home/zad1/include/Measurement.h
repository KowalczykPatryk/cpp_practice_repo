#pragma once
#include <iostream>

class Measurement{
private:
    double _value;
public:
    explicit Measurement(double value);
    double GetValue() const;
    void SetValue(double value);
    operator double() const;
    Measurement& operator+(Measurement& measurement);
    friend std::ostream& operator<<(std::ostream& os, const Measurement& measurement);
};