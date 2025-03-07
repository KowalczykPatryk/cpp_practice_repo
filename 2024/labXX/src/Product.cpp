#include "Product.h"
#include <iostream>

Product::Product(): type(0), amount(0){}
Product::Product(int type, int amount): type(type), amount(amount){}
void Product::Print()
{
    std::cout << "typ: " << this->type << ", ilosc sztuk: " << this->amount << std::endl;
}
int Product::getType()
{
    return this->type;
}
int Product::getAmount()
{
    return this->amount;
}
void Product::setType(int type)
{
    this->type = type;
}
void Product::setAmount(int amount)
{
    this->amount = amount;
}