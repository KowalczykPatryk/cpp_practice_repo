#include "Course.h"
#include <iostream>

Course::Course(): name(""), x(0.0), y(0.0) {std::cout << "\nWywolanie konstruktora Course..." << std::endl;};
Course::Course(const std::string& name): name(name), x(0.0), y(0.0) {std::cout << "W\nywolanie konstruktora Course..." << std::endl;};
Course::Course(const std::string& name, double x, double y): name(name), x(x), y(y) {std::cout << "\nWywolanie konstruktora Course..." << std::endl;};
void Course::SetName(std::string name)
{
    this->name = name;
}
void Course::SetX(double x)
{
    this->x = x;
}
void Course::SetY(double y)
{
    this->y = y;
}
std::string Course::GetName()
{
    return this->name;
}
double Course::GetX() const
{
    return this->x;
}
double Course::GetY() const
{
    return this->y;
}
void Course::Presentation()
{
    std::cout << "\n### Prezentacja kursu ###" <<std::endl;
std::cout << "Nazwa: " << this->name << std::endl;
std::cout << "Liczba punktow wewnetrznych za kurs: " << this->x << std::endl;
std::cout << "Liczba punktow ECTS za kurs: " << this->y << std::endl;
}
