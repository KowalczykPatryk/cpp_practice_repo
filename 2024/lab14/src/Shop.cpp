#include "Shop.h"


Shop::Shop(): products(nullptr), size(0){}
Shop::Shop(const Shop &shop)
{
    this->products = new Product[shop.size];
    for (int i = 0; i < shop.size; i++)
    {
        this->products[i] = shop.products[i];
    }
    this->size = shop.size;
}
Shop::~Shop()
{
    delete[] this->products;
    this->products = nullptr;
    this->size = 0;
}
void Shop::Remove()
{
    if (this->size > 0)
    {
        Product *temp = new Product[this->size - 1];
        for (int i = 0; i < this->size - 1; i++)
        {
            temp[i] = this->products[i];
        }
        delete[] this->products;
        this->products = temp;
        this->size--;
    }
    else
    {
        std::cout << "BLAD: Pusto !" << std::endl;
    }
}
void Shop::Add(const Product &product)
{
    Product *temp = new Product[this->size + 1];
    for (int i = 0; i < this->size; i++)
    {
        temp[i] = this->products[i];
    }
    temp[this->size] = product;
    delete[] this->products;
    this->products = temp;
    this->size++;
}
void Shop::Clear()
{
    delete[] this->products;
    this->products = nullptr;
    this->size = 0;
}
Product& Shop::operator[](int index)
{
    return this->products[index];
}
Shop Shop::operator+(int amount)
{
    Shop temp = *this;
    for (int i = 0; i < this->size; i++)
    {
        temp.products[i] = temp.products[i] + amount;
    }
    return temp;
}
Shop Shop::operator-(int amount)
{
    Shop temp = *this;
    for (int i = 0; i < this->size; i++)
    {
        temp.products[i] = temp.products[i] - amount;
    }
    return temp;
}
Shop Shop::operator*(int times)
{
    Shop temp = *this;
    for (int i = 0; i < this->size; i++)
    {
        temp.products[i] = temp.products[i] * times;
    }
    return temp;
}
Shop Shop::operator+(const Shop &shop)
{
    Shop temp = *this;
    for (int i = 0; i < shop.size; i++)
    {
        temp.Add(shop.products[i]);
    }
    return temp;

}
std::ostream& operator<<(std::ostream &out, const Shop &shop)
{
    out << "---\n# Zawartosc/sklad:\n";
    for (int i = 0; i < shop.size; i++) {
        out << shop.products[i];
    }
    out << "---" << std::endl;
    return out;
}
Shop& Shop::operator=(const Shop &shop)
{
    if (this != &shop)
    {
        delete[] this->products;
        this->products = new Product[shop.size];
        for (int i = 0; i < shop.size; i++)
        {
            this->products[i] = shop.products[i];
        }
        this->size = shop.size;
    }
    return *this;
}