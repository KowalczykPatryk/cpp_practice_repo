#include "ShopB.h"


ShopB::ShopB()
{
    this->size = 0;
    this->products = new Product[10];
}
ShopB::~ShopB()
{
    delete[] this->products;
    this->size = 0;
}
ShopB::ShopB(const ShopB &shop)
{
    this->products = new Product[10];
    this->size = shop.size;
    for (int i = 0; i < shop.size; i++)
    {
        this->products[i].setType(shop.products[i].getType());
        this->products[i].setAmount(shop.products[i].getAmount());
    }
}
ShopB::ShopB(const ShopB &&shop)
{
    this->size = shop.size;
    for (int i = 0; i < shop.size; i++)
    {
        this->products[i] = shop.products[i];
    }

}
ShopB ShopB::operator=(const ShopB &shop)
{
    this->size = shop.size;
    for (int i = 0; i < shop.size; i++)
    {
        this->products[i] = shop.products[i];
    }
    return *this;
}
void ShopB::Print()
{
    std::cout << "---\n# Zawartosc/sklad:" << std::endl;
    for (int i = 0; i < this->size; i++)
    {
        std::cout << "typ: " << this->products[i].getType() << ", ilosc sztuk: " << this->products[i].getAmount() << std::endl; 
    }
    std::cout << "---" << std::endl;
}
void ShopB::Remove()
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
void ShopB::Add(const Product &product)
{
    this->products[this->size] = product;
    this->size++;
}
void ShopB::Clear()
{
    this->size = 0;
}