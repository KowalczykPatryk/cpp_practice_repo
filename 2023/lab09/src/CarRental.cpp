#include "CarRental.h"


CarRental::CarRental(){}
CarRental::CarRental(const Car &car)
{
    this->cars.push_back(car);
}
CarRental::CarRental(const Car &car1, const Car &car2)
{
    this->cars.push_back(car1);
    this->cars.push_back(car2);
}
CarRental::CarRental(const int &size, Car **cars)
{
    for (int i = 0; i < size; i++)
    {
        this->cars.push_back(*cars[i]);
    }
}
CarRental::CarRental(const std::vector<Car> &cars)
{
    this->cars.insert(this->cars.end(), cars.begin(), cars.end());
}
void CarRental::Print() const
{
    std::cout << "---\n" << "# Zawartosc/sklad:\n";
    for (int i = 0; i < this->cars.size(); i++)
    {
        std::cout << "typ: " << this->cars[i].GetType() << ", ilosc sztuk: " << this->cars[i].GetAmount() << std::endl;
    }
    std::cout << "---\n";
    if (this->cars.size() == 0)
    {
        std::cout << "BLAD:Pusto !" << std::endl;
    }
}
void CarRental::Remove()
{
    this->cars.pop_back();
}
void CarRental::Add(const Car &car)
{
    this->cars.push_back(car);
}
void CarRental::Clear()
{
    this->cars.clear();
}
CarRental::operator int() const
{
    int sum = 0;
    for (std::vector<Car>::const_iterator it = this->cars.begin(); it != this->cars.end(); it++)
    {
        sum += it->GetAmount();
    }
    return sum;
}