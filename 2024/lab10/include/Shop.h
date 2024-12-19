#ifndef SHOP_H
#define SHOP_H

#include "Product.h"
#include <iostream>

class Shop
{
private:
    Product** product;
    int size;
public:
    Shop();
    Shop(const Shop & shop);
    Shop(const Product &product);
    Shop(const Product &product1, const Product &product2);
    Shop(int number_of_products, Product** product_array);
    ~Shop();
    void Clear();
    void Print();
    void Remove();
    void Add(const Product &product);
};

#endif