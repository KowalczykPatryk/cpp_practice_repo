#ifndef SHOP_H
#define SHOP_H

#define MAX_SIZE 128
#include "Product.h"

class Shop
{
private:
    Product *products;
    int size;
public:
    Shop();
    Shop(const Shop &shop);
    ~Shop();
    void Remove();
    void Add(const Product &product);
    void Clear();
    Product& operator[](int index);
    Shop operator+(int amount);
    Shop operator+(const Shop &shop);
    Shop operator-(int amount);
    Shop operator*(int times);
    Shop& operator=(const Shop &shop);
    friend std::ostream& operator<<(std::ostream &out, const Shop &shop);
};

#endif
