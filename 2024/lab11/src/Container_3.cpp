#include "Container_3.h"
#include <iostream>

Container_3::Container_3(int i): current_size(0),max_size(i), array(nullptr)
{
    this->array = new int[i];
}
Container_3::Container_3(Container_3 &container)
{
    this->current_size = container.Size();
    this->max_size = container.Max_Size();
    this->array = new int[container.Max_Size()];
    for (int i = 0; i < container.Size(); i++)
    {
        this->array[i] = container.array[i]; 
    } 
    
}
Container_3::~Container_3()
{
    if (this->array != nullptr)
        delete [] this->array;
}

void Container_3::Print()
{
    std::cout << "#Zawartosc obiektu: ";
    for (int i = 0; i < this->current_size; i++)
    {
        std::cout << this->array[i] << ",";
    }
    std::cout << std::endl;
}
int Container_3::Delete()
{
    if (this->IsEmpty())
    {
        std::cout << "#BLAD: Obiekt pusty" << std::endl;
        return 1;
    }
    else
    {
        this->current_size--;
        return this->array[current_size];
    }
}
bool Container_3::IsEmpty()
{
    return this->current_size == 0;
}
bool Container_3::IsFull()
{
    return this->current_size == this->max_size;
}
void Container_3::Add(int i)
{
    if (!this->IsFull())
    {
        array[this->current_size] = i;
        current_size++;
    }
    else
    {
        std::cout << "#RE-ALOKACJA DO Rozmiaru: " << max_size * 2 << std::endl;
        int *newArray = new int[max_size * 2];
        for (int i = 0; i < max_size; i++)
        {
            newArray[i] = array[i];
        }
        max_size *= 2;
        delete [] array;
        array = newArray;
        array[this->current_size] = i;
        current_size++;
    }
}
int Container_3::Size()
{
    return this->current_size;
}
void Container_3::Clear()
{
    this->current_size = 0;
    this->max_size = 0;
}
int Container_3::Max_Size()
{
    return this->max_size;
}