#include "Shape.h"
const std::string& Shape::getName() const{
    return this->name;
}
void Shape::setName(const std::string& name){
    this->name = name;
}
std::ostream& operator<<(std::ostream& os, const Shape& shape)
{
    shape.print(os);
    return os;
}

