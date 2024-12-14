#include "Service.h"
#include <iostream>

void Service::Test(SnowCannon* snowCannon, double snow)
{
    std::cout << "\n#############################################################" << std::endl;
    std::cout << "### Test serwisowy ###" << std::endl;
    std::cout << "\n 1. Uzupelnij zbiornik do pelna:";
    snowCannon->Reload(snowCannon->capacity - snowCannon->water);
    std::cout << "2. Przebieg testowy: " << snow << " metrow szesciennych:";
    snowCannon->Start();
    snowCannon->Make(snow);
    snowCannon->Stop();
    std::cout << "\n### Koniec testu serwisowego ###" << std::endl;
    std::cout << "#############################################################" << std::endl;
}

void Service::TestCopy(SnowCannon snowCannon, double snow)
{
    std::cout << "\n#############################################################" << std::endl;
    std::cout << "### Test serwisowy na egzemplarzu fabrycznym o identycznych parametrach ###" << std::endl;
    std::cout << "\n 1. Uzupelnij zbiornik do pelna:";
    snowCannon.Reload(snowCannon.capacity - snowCannon.water);
    std::cout << "2. Przebieg testowy: " << snow << " metrow szesciennych:";
    snowCannon.Start();
    snowCannon.Make(snow);
    snowCannon.Stop();
    std::cout << "\n### Koniec testu serwisowego ###" << std::endl;
    std::cout << "#############################################################" << std::endl;
}