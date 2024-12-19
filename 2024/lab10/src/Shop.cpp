#include "Shop.h"

Shop::Shop(): size(0)
{
    this->product = nullptr;
}
Shop::Shop(const Shop &shop)
{
    this->size = shop.size;
    this->product = new Product*[this->size];
    for (int i = 0; i < this->size; i++)
    {
        this->product[i] = new Product(*shop.product[i]);
    }
}
Shop::Shop(const Product &product)
{
    this->product = new Product*[1];
    this->product[0] = new Product(product);
    this->size = 1;
}
Shop::Shop(const Product &product1, const Product &product2)
{
    this->product = new Product*[2];
    this->product[0] = new Product(product1);
    this->product[1] = new Product(product2);
    this->size = 2;
}
Shop::Shop(int number_of_products, Product** product_array)
{
    this->product = new Product*[number_of_products];
    for (int i = 0; i < number_of_products; i++)
    {
        this->product[i] = new Product(*product_array[i]);
    }
    this->size = number_of_products;
}
Shop::~Shop()
{
    if (product)
    {
        for (int i = 0; i < size; i++)
        {
                delete this->product[i];
        }
        delete[] product;
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
            std::cout << "typ: " << this->product[i]->getType() << ", ilosc sztuk: " << this->product[i]->getNumber() << std::endl;
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
        Product** newProduct = new Product*[this->size - 1];
        for (int i = 0; i < this->size - 1; i++)
        {
            newProduct[i] = new Product(*this->product[i]);
        }
        for (int i = 0; i < this->size - 1; i++)
        {
            delete this->product[i];
            this->product[i] = nullptr;
        }
        this->size--;
        delete this->product[this->size];
        this->product[this->size] = nullptr;
        delete[] this->product;
        this->product = newProduct;
        newProduct = nullptr;
    }
}
void Shop::Add(const Product &product)
{
    Product** newProduct = new Product*[this->size + 1];
    for (int i = 0; i < this->size; i++)
    {
        newProduct[i] = new Product(*this->product[i]);
    }
    newProduct[this->size] = new Product(product);
    for (int i = 0; i < this->size; i++)
    {
        delete this->product[i];
        this->product[i] = nullptr;
    }
    delete[] this->product;
    this->product = newProduct;
    newProduct = nullptr;
    this->size++;
}
void Shop::Clear()
{
    for (int i = 0; i < this->size; i++)
    {
        delete this->product[i];
        this->product[i] = nullptr;
    }
    delete[] this->product;
    this->product = nullptr;
    this->size = 0;
}