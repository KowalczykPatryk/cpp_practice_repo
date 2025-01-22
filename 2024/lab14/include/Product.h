#pragma once
#include <iostream>
class Product
{
private:
    int type;
    int amount;
public:
    Product();
    Product(int type, int amount);
    Product& operator++();
    Product operator++(int); 
    Product& operator--();
    Product operator--(int); 
    Product operator+(int amount);
    Product operator+(const Product &product);
    Product operator-(int amount);
    Product operator*(int times);
    Product& operator=(const Product &product);
    friend std::ostream& operator<<(std::ostream &out, const Product &car);
};