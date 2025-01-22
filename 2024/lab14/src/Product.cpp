#include "Product.h"

Product::Product(): type(0), amount(0){}
Product::Product(int type, int amount)
{
    this->type = type;
    this->amount = amount;
}
//pre
Product& Product::operator++()
{
    ++amount;
    return *this;
}
//post
Product Product::operator++(int)
{
    Product temp = *this;
    ++(*this);
    return temp;
} 
Product& Product::operator--()
{
    --amount;
    if (this->amount < 0)
    this->amount = 0;
    return *this;
}
Product Product::operator--(int)
{
    Product temp = *this;
    --(*this);
    return temp;
}
Product Product::operator+(int amount)
{
    return Product(this->type, this->amount + amount);
}
Product Product::operator+(const Product &product)
{
    return Product(this->type, this->amount + product.amount);
}
Product Product::operator-(int amount)
{
    int ret_amount;
    if (this->amount - amount < 0)
    {
        ret_amount = 0;
    }
    else
    {
        ret_amount = this->amount - amount;
    }
    return Product(this->type, ret_amount);
}
Product Product::operator*(int times)
{
    return Product(this->type, this->amount * times);
}
std::ostream& operator<<(std::ostream &out, const Product &product)
{
    out << "typ: " << product.type << ", ilosc sztuk: " << product.amount << std::endl;
    return out;
}
Product& Product::operator=(const Product &other)
{
    if (this != &other)
    {
        this->type = other.type;
        this->amount = other.amount;
    }
    return *this;
}