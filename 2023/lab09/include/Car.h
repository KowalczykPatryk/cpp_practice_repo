#ifndef CAR_H
#define CAR_H

#include <string>
#include <iostream>


class Car
{
private:
    int type;
    int amount;

public:
    Car(const int &type, const int &amount);
    Car(const int &type);
    void Print() const;
    void SetCard(const int &amount);
    void SetType(const int &type);
    int GetType() const;
    int GetAmount() const;
    void SetAmount(const int &amount);
    std::string ToString() const;
    operator int() const;
    operator std::string() const;
    friend int Compare(const Car &car1, const Car &car2);

};



#endif