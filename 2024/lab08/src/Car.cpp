#include "Car.h"
#include <iostream>

void Car::SetID(int id)
{
    this->id = id;
}
void Car::SetState(bool state)
{
    this->state = state;
}
void Car::SetTankCapacity(double capacity)
{
    this->capacity = capacity;
}
void Car::SetConsumption(double consumption)
{
    this->consumption = consumption;
}
void Car::SetFuel(double fuel)
{
    this->fuel = fuel;
}
double Car::GetCapacity()
{
    return this->capacity;
}
void Car::Presentation() const
{
    std::cout << "\n### Prezentacja ###" << std::endl;
    std::cout << "Identyfikator samochodu: " << this->id << std::endl;
    if (this->state == false)
        std::cout << "Samochod jest wylaczony" << std::endl;
    else
        std::cout << "Samochod jest wlaczony" << std::endl;
    std::cout << "Pojemnosc baku wynosi " << this->capacity << " litrow" << std::endl;
    std::cout << "Srednie spalanie wynosi " << this->consumption << " litrow / 100 km" << std::endl;
    std::cout << "W baku jest " << this->fuel << " litrow paliwa" << std::endl;
}
void Car::Drive(int distance)
{
    std::cout << "\n### Jazda ###" << std::endl;
    if (distance <= 0)
    {
        std::cout << "BLAD: Niepoprawny dystans" << std::endl;
    }
    else if (this->state == false)
    {
        std::cout << "BLAD: Wlacz silnik" << std::endl;
    }
    else if (distance > (this->fuel / this->consumption) * 100)
    {
        double max_distance = (this->fuel / this->consumption) * 100;
        std::cout << "Przejechales " << (int)max_distance << " km" << std::endl;
        this->fuel = 0;
    }
    else
    {
        std::cout << "Przejechales " << distance << " km" << std::endl;
        this->fuel -= (distance / 100.0) * this->consumption;
    }


}
void Car::Start()
{
    std::cout << "\n### Uruchomienie samochodu ###" << std::endl;
    if (this->fuel <= 0)
    {
        std::cout << "BLAD: Brak paliwa, zatankuj" << std::endl;
    }
    else
    {
        std::cout << "Silnik zostal wlaczony" << std::endl;
        this->state = true;
    }

}
void Car::Refuel(double fuel)
{
    std::cout << "\n### Tankowanie ###" << std::endl;
    if (this->state == true)
    {
        std::cout << "BLAD: Wylacz samochod przed tankowaniem" << std::endl;
    }
    else if (fuel <= 0)
    {
        std::cout << "BLAD: Niepoprawna ilosc paliwa do zatankowania" << std::endl;
    }
    else if (fuel + this->fuel > this->capacity)
    {
        std::cout << "Zatankowales " << this->capacity - this->fuel << " litrow" << std::endl;
        this->fuel = this->capacity;
    }
    else
    {
        std::cout << "Zatankowales " << fuel << " litrow" << std::endl;
        this->fuel += fuel;
    }
}
void Car::Stop()
{
    std::cout << "\n### Zatrzymanie samochodu ###" << std::endl;
    std::cout << "Silnik zostal wylaczony" << std::endl;
    this->state = false;
}