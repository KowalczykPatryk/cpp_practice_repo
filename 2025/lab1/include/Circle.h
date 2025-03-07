#pragma once
#include "Shape.h"

class Circle: public Shape{
private:
    double radius;
public:
    double getRadius() const;
    Circle(std::string name, double radius);
    double Area() const override;
    Circle& operator+(Circle circle);
    void print(std::ostream& os) const override;
};