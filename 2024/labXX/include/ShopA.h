#pragma once
#include "Product.h"
class ShopA
{
private:
    Product products[10];
    int size;
public:
    ShopA();
    ShopA(const ShopA &shop);
    ShopA(const ShopA &&shop);
    ShopA operator=(const ShopA &shop);
    void Print();
    void Remove();
    void Add(const Product &product);
    void Clear();
};