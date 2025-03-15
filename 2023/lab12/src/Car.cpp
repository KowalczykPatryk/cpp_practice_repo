#include "Car.h"

Car::Car(): type(0), amount(0){}
Car::Car(const int &type, const int &amount)
{
    this->type = type;
    this->amount = amount;
}
Car& Car::operator++()
{
    ++amount;
    return *this;
}
Car Car::operator++(int)
{
    Car temp = *this;
    ++(*this);
    return temp;
} 
Car& Car::operator--()
{
    --amount;
    return *this;
}
Car Car::operator--(int)
{
    Car temp = *this;
    --(*this);
    return temp;
}
Car Car::operator+(int amount)
{
    return Car(this->type, this->amount + amount);
}
Car Car::operator-(int amount)
{
    return Car(this->type, this->amount - amount);
}
Car Car::operator*(int times)
{
    return Car(this->type, this->amount * times);
}
std::ostream& operator<<(std::ostream &out, const Car &car)
{
    out << "typ: " << car.type << ", ilosc sztuk: " << car.amount << std::endl;
    return out;
}