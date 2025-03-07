#pragma once
#include "Shape.h"

class Rectangle: public Shape{
private:
    double width;
    double height;
public:
    Rectangle(const std::string& name, double width, double height);
    double Area() const override;
    Rectangle& operator*(int scale);
    void print(std::ostream& os) const override;
};