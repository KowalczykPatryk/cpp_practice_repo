#include "CarRental.h"

CarRental::CarRental()
{
    this->cars = nullptr;
    this->size = 0;
}
CarRental::CarRental(const Car &car)
{
    this->cars = new Car[1];
    this->cars[0] = car;
    this->size = 1;
}
void CarRental::Remove()
{
    if (this->size > 0)
    {
        this->size--;
    }
    else
    {
        std::cout << "BLAD: Pusto !" << std::endl;
    }
}
void CarRental::Add(const Car &car)
{
    Car *temp = new Car[this->size + 1];
    for (int i = 0; i < this->size; i++)
    {
        temp[i] = this->cars[i];
    }
    delete[] this->cars;
    this->cars = temp;
    this->size++;
}
void CarRental::Clear()
{
    delete[] this->cars;
    this->cars = nullptr;
    this->size = 0;
}
Car& CarRental::operator [](int index)
{
    return this->cars[index];
}
CarRental CarRental::operator+(int amount)
{
    CarRental temp = *this;
    for (int i = 0; i < this->size; i++)
    {
        temp.cars[i] = temp.cars[i] + amount;
    }
    return temp;
}
CarRental CarRental::operator-(int amount)
{
    CarRental temp = *this;
    for (int i = 0; i < this->size; i++)
    {
        temp.cars[i] = temp.cars[i] - amount;
    }
    return temp;
}
CarRental CarRental::operator*(int times)
{
    CarRental temp = *this;
    for (int i = 0; i < this->size; i++)
    {
        temp.cars[i] = temp.cars[i] * times;
    }
    return temp;
}
std::ostream& operator<<(std::ostream &out, const CarRental &rental)
{
    if (rental.size == 0) {
        out << "BLAD: Pusto !" << std::endl;
    } else {
        out << "---\n# Zawartosc/sklad:\n---\n";
        for (int i = 0; i < rental.size; i++) {
            out << rental.cars[i];
        }
        out << "---" << std::endl;
    }
    return out;
}