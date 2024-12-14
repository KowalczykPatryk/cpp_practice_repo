#ifndef SERVICE_H
#define SERVICE_H

#include "SnowCannon.h"

class Service
{
    public:
    void Test(SnowCannon* snowCannon, double snow);
    void TestCopy(SnowCannon snowCannon, double snow);
};

#endif // SERVICE_H