#include "Functor.h"

Functor::Functor()
{
    this->aLessb = 0;
    this->aEqualb = 0;
    this->aGreaterb = 0;
}
int Functor::operator()(int a, int b)
{
    if (a < b)
    {
        this->aLessb++;
        return 1;
    }
    else if (a == b)
    {
        this->aEqualb++;
        return 0;
    }
    else
    {
        this->aGreaterb++;
        return 0;
    }
}
void Functor::wypiszStatystyki()
{
    std::cout << "Liczba porownan:\n";
    std::cout << "'a' mniejsze 'b': " << this->aLessb << std::endl;
    std::cout << "'a' rowne 'b': " << this->aEqualb << std::endl;
    std::cout << "'a' wieksze 'b': " << this->aGreaterb << std::endl;
}