#include "Container_1.h"
#include <iostream>


Container_1::Container_1(): size(0) {}
Container_1::Container_1(int i): size(1)
{
    this->array[0] = i;
}

void Container_1::Print()
{
    std::cout << "#Zawartosc obiektu: ";
    for (int i = 0; i < this->size; i++)
    {
        std::cout << this->array[i] << ",";
    }
    std::cout << std::endl;
}
int Container_1::Delete()
{
    if (this->IsEmpty())
    {
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
    }
    else
    {
        this->size--;
        return this->array[size];
    }
}
bool Container_1::IsEmpty()
{
    return this->size == 0;
}
bool Container_1::IsFull()
{
    return this->size == 4;
}
void Container_1::Add(int i)
{
    if (!this->IsFull())
    {
        array[this->size] = i;
        this->size++;
    }
    else
    {
        std::cout << "#BLAD: Obiekt zapelniony" << std::endl;
    }
}
int Container_1::Size()
{
    return this->size;
}
void Container_1::Clear()
{
    this->size = 0;
}