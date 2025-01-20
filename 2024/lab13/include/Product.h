#ifndef PRODUCT_H
#define PRODUCT_H
#include "string"

class Product
{
private:
    int typ;
    int sztuki;
public:
    Product();
    Product(int a, int b);
    Product(int a);
    int getSztuki() const;
    int getTyp() const;
    void Print()const;
    void SetCard(int b);
    friend int Compare(const Product &first, const Product &second);
    std::string ToString();
    operator std::string() const;
    operator int() const;
};

#endif