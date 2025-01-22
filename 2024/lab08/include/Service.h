#ifndef SERVICE_H
#define SERVICE_H
#include "Car.h"

class Service
{
public:
    void Test(Car *car, double distance);
    void TestCopy(Car car, double distance);
};

#endif