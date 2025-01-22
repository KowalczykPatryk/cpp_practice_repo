#include "Service.h"
#include "Car.h"
#include <iostream>

void Service::Test(Car *car, double distance)
{
    std::cout << "\n#############################################################" << std::endl;
    std::cout << "### Test serwisowy ###" << std::endl;
    std::cout << "1. Tankowanie do pelna:" << std::endl;
    car->Refuel(car->GetCapacity());
    std::cout << "2. Jazda testowa: " << distance << " km:" << std::endl;
    car->Start();

    car->Drive(distance);
    car->Stop();

    std::cout << "\n### Koniec testu serwisowego ###" << std::endl;
    std::cout << "#############################################################" << std::endl;
}
void Service::TestCopy(Car car, double distance)
{
    std::cout << "#############################################################" << std::endl;
    std::cout << "### Test serwisowy ###" << std::endl;
    std::cout << "1. Tankowanie do pelna:" << std::endl;
    car.Refuel(car.GetCapacity());
    std::cout << "2. Jazda testowa: " << distance << " km:" << std::endl;
    car.Start();

    car.Drive(distance);
    car.Stop();

    std::cout << "### Koniec testu serwisowego ###" << std::endl;
    std::cout << "#############################################################" << std::endl;
}