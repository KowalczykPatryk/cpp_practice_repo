#ifndef CARRENTAL_H
#define CARRENTAL_H

#include "Car.h"
#include <vector>

class CarRental
{
private:
    std::vector<Car> cars;
public:
    CarRental();
    CarRental(const Car &car);
    CarRental(const Car &car1, const Car &car2);
    CarRental(const int &size, Car **cars);
    CarRental(const std::vector<Car> &cars);
    void Print() const;
    void Remove();
    void Add(const Car &car);
    void Clear();
    operator int() const;
};

#endif