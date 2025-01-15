#ifndef CONTAINER_1_H
#define Conatiner_1_H

class Container_1
{
private:
    int size;
    int array[4];
public:
    Container_1();
    Container_1(int i);
    void Print();
    int Delete();
    bool IsEmpty();
    bool IsFull();
    void Add(int i);
    int Size();
    void Clear();
};

#endif