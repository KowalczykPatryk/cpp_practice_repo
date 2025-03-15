#pragma once
#include <iostream>

class Car
{
private:
    int type;
    int amount;
public:
    Car();
    Car(const int &type, const int &amount);
    Car &operator++();
    Car operator++(int); 
    Car &operator--();
    Car operator--(int); 
    Car operator+(int amount);
    Car operator-(int amount);
    Car operator*(int times);
    friend std::ostream& operator<<(std::ostream &out, const Car &car);
};

