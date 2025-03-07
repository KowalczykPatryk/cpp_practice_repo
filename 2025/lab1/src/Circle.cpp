#include "Circle.h"
#include <cmath>
#define _USE_MATH_DEFINES

double Circle::Area() const
{
    return M_PI * std::pow(radius,2);
}
double Circle::getRadius() const
{
    return radius;
}
Circle::Circle(std::string name, double radius): radius(radius){
    setName(name);
}
Circle& Circle::operator+(Circle circle)
{
    this->radius += circle.getRadius();
    return *this;
}
void Circle::print(std::ostream& os) const
{
    os << "The radius of the circle " << getName() << " is: " << radius;
}