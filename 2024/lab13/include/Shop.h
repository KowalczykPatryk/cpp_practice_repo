#ifndef SHOP_H
#define SHOP_H
#include "Product.h"
class Shop
{
private:
    Product *array;
    int size;
public:
    Shop();
    ~Shop();
    Shop(const Shop &shop);
    Shop(const Product &product);
    Shop(const Product &product1, const Product &product2);
    Shop(int number, Product *product_array[]);
    Shop(Shop &&other);
    Shop& operator=(Shop &&other);
    void Print();
    void Remove();
    void Add(Product product);
    void Clear();
    operator int() const;
    
};

#endif