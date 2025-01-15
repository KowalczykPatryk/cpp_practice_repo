#ifndef CONTAINER_3_H
#define Conatiner_3_H
/**
 * @brief Klasa zawierająca tablice o dynamicznym rozmiarze
 * 
 */
class Container_3
{
private:
    /** @brief przechowuje aktualny rozmiar tablicy */
    int current_size;
    int max_size;
    int *array;
public:
    Container_3(int i);
    Container_3(Container_3 &container);
    ~Container_3();
    void Print();
    int Delete();
    bool IsEmpty();
    bool IsFull();
    void Add(int i);
    int Size();
    void Clear();
    int Max_Size();
};

#endif