#include "Product.h"
#include "iostream"

Product::Product(): typ(0), sztuki(0){}
Product::Product(int a, int b): typ(a), sztuki(b){}
Product::Product(int a)
{
    this->typ = a;
    this->sztuki = a;
}
int Product::getSztuki()const
{
    return this->sztuki;
}
int Product::getTyp() const 
{
    return this->typ;
}
void Product::Print() const
{
    std::cout << "typ: " << this->typ << ", ilosc sztuk: " << this->sztuki << std::endl;
}
void Product::SetCard(int b)
{
    sztuki = b;
}
int Compare(const Product &first, const Product &second)
{
    if (first.getSztuki() < second.getSztuki())
    {
        return -1;
    }
    else
    {
        return 1;
    }
}
std::string Product::ToString()
{
    return "<typ=" + std::to_string(this->typ) + ", ilosc=" + std::to_string(this->sztuki) + ">";
}
Product::operator std::string() const
{
    return "<typ=" + std::to_string(this->typ) + ", ilosc=" + std::to_string(this->sztuki) + ">";
}
Product::operator int() const
{
    return this->typ;
}