#pragma once
#include "Product.h"
class ShopB
{
private:
    Product *products;
    int size;
public:
    ShopB();
    ShopB(const ShopB &shop);
    ShopB(const ShopB &&shop);
    ~ShopB();
    ShopB operator=(const ShopB &shop);
    void Print();
    void Remove();
    void Add(const Product &product);
    void Clear();
};