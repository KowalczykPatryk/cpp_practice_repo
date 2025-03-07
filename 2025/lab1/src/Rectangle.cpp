#include "Rectangle.h"

Rectangle::Rectangle(const std::string& name, double width, double height): width(width), height(height){
    setName(name);
}
double Rectangle::Area() const
{
    return width*height;
}
Rectangle& Rectangle::operator*(int scale)
{
    this->width *= scale;
    this->height *= scale;
    return *this;
}
void Rectangle::print(std::ostream& os) const
{
    os << "Width of the rectangle " << getName() << " is: " << width << " and the height is: " << height;
}