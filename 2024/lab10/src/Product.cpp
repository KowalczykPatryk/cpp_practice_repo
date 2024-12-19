#include "Product.h"
#include <iostream>

Product::Product(){}
Product::Product(int type): type(type), number_of_pieces(type){}
Product::Product(int type, int number_of_pieces): type(type), number_of_pieces(number_of_pieces){}
void Product::Print()
{
    std::cout << "typ: " << this->type << ", ilosc sztuk: " << this->number_of_pieces << std::endl;
}
int Product::getType()
{
    return this->type;
}
int Product::getNumber()
{
    return this->number_of_pieces;
}
void Product::SetCard(int number_of_pieces)
{
    this->number_of_pieces = number_of_pieces;
}
void Product::setType(int type)
{
    this->type = type;
}
void Product::setNumber(int number)
{
    this->number_of_pieces = number;
}