#include "Point.h"
#include <iostream>
#include <string>

Point::Point(): name(""), x(0), y(0) {}
Point::Point(const std::string &name): name(name), x(0), y(0){}
Point::Point(const std::string &name, const double &x, const double &y): name(name), x(x), y(y) {}
void Point::Presentation () const
{
    std::cout << "\n### Prezentacja punktu ###" << std::endl;
    std::cout << "Nazwa: " << this->name << std::endl;
    std::cout << "Wspolrzedna X: " << this->x << std::endl;
    std::cout << "Wspolrzedna Y: " << this->y << std::endl;
}
void Point::SetName(const std::string &name)
{
    this->name = name;
}
void Point::SetX(const double &x)
{
    this->x = x;
}
void Point::SetY(const double &y)
{
    this->y = y;
}
std::string Point::getName()
{
    return this->name;
}
double Point::getX()
{
    return this->x;
}
double Point::getY()
{
    return this->y;
}