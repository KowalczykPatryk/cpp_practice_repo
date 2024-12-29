#include "Car.h"
#include <iostream>

Car::Car(const int &type, const int &amount)
{
    this->type = type;
    this->amount = amount;
}
Car::Car(const int &type)
{
    this->type = type;
    this->amount = 0;
}
void Car::Print() const
{
    std::cout << "typ: " << this->type << ", ilosc sztuk: " << this->amount << std::endl;
}
void Car::SetCard(const int &amount)
{
    this->amount = amount;
}
void Car::SetType(const int &type)
{
    this->type = type;
}
int Car::GetType() const
{
    return this->type;
}
int Car::GetAmount() const
{
    return this->amount;
}
void Car::SetAmount(const int &amount)
{
    this->amount = amount;
}
int Compare(const Car &car1, const Car &car2)
{
    if (car1.amount < car2.amount) return -1;
    if (car1.amount > car2.amount) return 1;
    return 0;
}
std::string Car::ToString() const
{
    return "<typ=" + std::to_string(this->type) + ", ilosc=" + std::to_string(this->amount) + ">\n";
}
Car::operator int() const
{
    return this->type;
}
Car::operator std::string() const
{
    return this->ToString();
}