#include "Shop.h"
#include "Product.h"
#include "iostream"

Shop::Shop(): size(0), array(nullptr) {}

Shop::~Shop()
{
    if (this->array != nullptr)
    {
        delete[] this->array;
        this->array = nullptr;
        this->size = 0;
    }
}
Shop::Shop(Shop &&other)
{
    this->size = other.size;
    this->array = other.array;
    other.size = 0;
    other.array = nullptr;
}
Shop& Shop::operator=(Shop &&other)
{
    if (this != &other)
    {
        this->size = other.size;
        this->array = other.array;
        other.size = 0;
        other.array = nullptr;
    }
    return *this;
}

Shop::Shop(const Shop &shop)
{
    this->size = shop.size;
    this->array = new Product[shop.size];
    for (int i = 0; i < shop.size; i++)
    {
        this->array[i] = shop.array[i];
    }
}
Shop::Shop(const Product &product)
{
    this->size = 1;
    this->array = new Product[1];
    this->array[0] = product;
}
Shop::Shop(const Product &product1, const Product &product2)
{
    this->size = 2;
    this->array = new Product[2];
    this->array[0] = product1;
    this->array[1] = product2;
}
Shop::Shop(int number, Product *product2[])
{
    this->size = number;
    this->array = new Product[number];
    for (int i = 0; i < number; i++)
    {
        this->array[i] = *product2[i];
    }
}
void Shop::Print()
{
    std::cout << "---\n";
    std::cout << "# Zawartosc/sklad:" << std::endl;
    if (this->size == 0)
    {
        std::cout << "Pusto !" << std::endl;
    }
    else
    {
        for (int i = 0; i < this->size; i++)
        {
            std::cout << "typ: " << this->array[i].getTyp() << ", ilosc sztuk: " << this->array[i].getSztuki() << std::endl;
        }
    }
    std::cout << "---\n";
}
void Shop::Remove()
{
    if (this->size == 0)
    {
        std::cout << "BLAD: Pusto !" << std::endl;
        return;
    }
    else
    {
        Product* newProduct = new Product[this->size - 1];
        for (int i = 0; i < this->size - 1; i++)
        {
            newProduct[i] = this->array[i];
        }
        delete[] this->array;
        this->array = newProduct;
        this->size--;
    }
}
void Shop::Add(Product product)
{
    Product* newProduct = new Product[this->size + 1];
    for (int i = 0; i < this->size; i++)
    {
        newProduct[i] = this->array[i];
    }
    newProduct[this->size] = product;
    delete[] this->array;
    this->array = newProduct;
    this->size++;
}
void Shop::Clear()
{
    delete[] this->array;
    this->array = nullptr;
    this->size = 0;
}
Shop::operator int() const
{
    int sum = 0;
    for (int i = 0; i < this->size; i++)
    {
        sum += this->array[i].getSztuki();
    }
    return sum;
}