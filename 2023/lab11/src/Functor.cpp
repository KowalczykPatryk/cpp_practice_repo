#include "Functor.h"

Functor::Functor()
{
    this->aLessb = 0;
    this->aEqualb = 0;
    this->aGreaterb = 0;
}
bool Functor::operator()(int a, int b)
{
    if (a < b)
    {
        this->aLessb++;
        return a < b;
    }
    else if (a == b)
    {
        this->aEqualb++;
        return a < b;
    }
    else
    {
        this->aGreaterb++;
        return a < b;
    }
}
void Functor::wypiszStatystyki()
{
    std::cout << "Liczba porownan:\n";
    std::cout << "'a' mniejsze 'b': " << this->aLessb << std::endl;
    std::cout << "'a' rowne 'b': " << this->aEqualb << std::endl;
    std::cout << "'a' wieksze 'b': " << this->aGreaterb << std::endl;
}