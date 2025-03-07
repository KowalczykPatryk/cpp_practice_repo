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
    int getType();
    int getAmount();
    void setType(int type);
    void setAmount(int amount);
    void Print();
};