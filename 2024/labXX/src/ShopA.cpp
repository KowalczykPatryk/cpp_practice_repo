#include "ShopA.h"


ShopA::ShopA(): size(0){}
ShopA::ShopA(const ShopA &shop)
{
    this->size = shop.size;
    for (int i = 0; i < shop.size; i++)
    {
        this->products[i] = shop.products[i];
    }
}
ShopA::ShopA(const ShopA &&shop)
{
    this->size = shop.size;
    for (int i = 0; i < shop.size; i++)
    {
        this->products[i] = shop.products[i];
    }

}
ShopA ShopA::operator=(const ShopA &shop)
{
    this->size = shop.size;
    for (int i = 0; i < shop.size; i++)
    {
        this->products[i] = shop.products[i];
    }
    return *this;
}
void ShopA::Print()
{
    std::cout << "---\n# Zawartosc/sklad:" << std::endl;
    for (int i = 0; i < this->size; i++)
    {
        std::cout << "typ: " << this->products[i].getType() << ", ilosc sztuk: " << this->products[i].getAmount() << std::endl; 
    }
    std::cout << "---" << std::endl;
}
void ShopA::Remove()
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
void ShopA::Add(const Product &product)
{
    this->products[this->size] = product;
    this->size++;
}
void ShopA::Clear()
{
    this->size = 0;
}