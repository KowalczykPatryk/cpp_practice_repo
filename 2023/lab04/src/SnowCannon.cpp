#include "SnowCannon.h"
#include <iostream>

void SnowCannon::SetID(int id)
{
    this->id = id;
}
void SnowCannon::SetState(bool state)
{
    this->state = state;
}
void SnowCannon::SetCapacity(double capacity)
{
    this->capacity = capacity;
}
void SnowCannon::SetConsumption(double consumption)
{
    this->consumption = consumption;
}
void SnowCannon::SetWater(double water)
{
    this->water = water;
}
void SnowCannon::Presentation()
{
    std::cout << "\n### Prezentacja ###" << std::endl;
    std::cout << "Identyfikator armatki snieznej: " << this->id << std::endl;
    std::cout << "Armatka sniezna jest ";
    if (!this->state)
    {
        std::cout << "wylonczona" << std::endl;
    }
    else
    {
        std::cout << "wlonczona" << std::endl;
    }

    std::cout << "Pojemnosc zbiornika armatki wynosi " << this->capacity << " metrow szesciennych" << std::endl;
    std::cout << "Srednia wydajnosc wynosi " << this->consumption <<  " metrow szesciennych wody na 1 metr szescienny sniegu" << std::endl;
    std::cout << "W zbiorniku armatki jest " << this->water << " metrow szesciennych wody" << std::endl;
}
void SnowCannon::Make(int snow)
{
    std::cout << "\n### Robienie sniegu ###" << std::endl;
    if (snow <= 0)
    {
        std::cout << "BLAD: Niepoprawna ilosc metrow szesciennych" << std::endl;
    }
    else if (!this->state)
    {
        std::cout << "BLAD: Wlacz armatke sniezna" << std::endl;
    }
    else
    {
        std::cout << "Zrobiles " << snow << " metrow szesciennych sniegu" << std::endl;
        this->water -= snow * this->consumption;
    }
}
void SnowCannon::Start()
{
    std::cout << "\n### Uruchomienie armatki snieznej ###" << std::endl;
    if (this->water)
    {
        std::cout << "Armatka sniezna zostala wlaczona" << std::endl;
        this->state = true;
    }
    else
    {
        std::cout << "BLAD: Brak wody, dolej do zbiornika zasilajacego" << std::endl;
    }
}
void SnowCannon::Stop()
{
    std::cout << "\n### Zatrzymanie armatki snieznej ###" << std::endl;
    std::cout << "Armatka sniezna zostala wylaczona" << std::endl;
    this->state = false;
}
void SnowCannon::Reload(int water)
{
    std::cout << "\n### Uzupelnienie zbiornika armatki snieznej woda ###" <<std::endl;
    if (this->state == true)
    {
        std::cout << "BLAD: Wylacz armatke sniezna przed uzupelnieniem wody" << std::endl;
    }
    else if (water < 0)
    {
        std::cout << "BLAD: Niepoprawna ilosc wody" << std::endl;
    }
    else
    {
        if (water > this->capacity - this->water)
        {
            water = this->capacity - this->water;
        }
        std::cout << "Uzupelniles " << water << " metrow szesciennych wody" << std::endl;
        this->water += water;
    }
    
}