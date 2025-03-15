#pragma once
#include "Car.h"
class CarRental
{
private:
    Car *cars;
    int size;
public:
    CarRental();
    CarRental(const Car &car);
    void Remove();
    void Add(const Car &car);
    void Clear();
    Car& operator [](int index);
    CarRental operator+(int amount);
    CarRental operator-(int amount);
    CarRental operator*(int times);
    friend std::ostream& operator<<(std::ostream &out, const CarRental &rental);
};