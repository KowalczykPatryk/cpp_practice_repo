#include "Polygon.h"
#include <iostream>
#include <string>

Polygon::Polygon(): sides(0), name(""), polygon(nullptr) {}
Polygon::Polygon(const std::string &name): name(name), sides(0), polygon(nullptr) {}
Polygon::Polygon(const std::string &name, const Point &one, const Point &two, const Point &three)
{
    this->name = name;
    this->polygon = new Point*[3];
    this->polygon[0] = new Point(one);
    this->polygon[1] = new Point(two);
    this->polygon[2] = new Point(three);
    this->sides = 3;
}
Polygon::Polygon(const std::string &name, const Point &one, const Point &two, const Point &three, const Point &four)
{
    this->name = name;
    this->polygon = new Point*[4];
    this->polygon[0] = new Point(one);
    this->polygon[1] = new Point(two);
    this->polygon[2] = new Point(three);
    this->polygon[3] = new Point(four);
    this->sides = 4;
}
Polygon::Polygon(const std::string &name, int sides, Point *points)
{
    this->name = name;
    this->polygon = new Point*[sides];
    for(int i = 0; i < sides; i++)
    {
        this->polygon[i] = new Point(points[i]);
    }
    this->sides = sides;
}
Polygon::~Polygon() 
{
    if (this->polygon != nullptr)
    {
        for (int i = 0; i < this->sides; i++)
        {
            delete this->polygon[i];
            this->polygon[i] = nullptr;
        }
        delete[] this->polygon;
        this->polygon = nullptr;
    }
}
void Polygon::Presentation()
{
    std::cout << "\n### Prezentacja wielokata ###" << std::endl;
    std::cout << "Nazwa: " << this->name<< std::endl;
    std::cout << "Liczba wierzcholkow: " << this->sides << std::endl;
    for (int i = 0; i < this->sides; i++)
    {
        std::cout << "Wierzcholek - nazwa: " << this->polygon[i]->getName() << ", X = " << this->polygon[i]->getX() << ", Y = " << this->polygon[i]->getY() << std::endl;
    }
}
void Polygon::SetName(const std::string &name)
{
    this->name = name;
}
Point* Polygon::GetVertices()
{
    Point *temp = new Point[this->sides];
    for (int i = 0; i < this->sides; i++)
    {
        temp[i].SetName(this->polygon[i]->getName());
        temp[i].SetX(this->polygon[i]->getX());
        temp[i].SetY(this->polygon[i]->getY());
    }
    return temp;
}
void Polygon::SetNewVertices(int sides, Point *points)
{
    Point **temp_polygon = new Point*[sides];
    for (int i = 0; i < sides; i++)
    {
        temp_polygon[i] = new Point(points[i]);

    }
    delete[] points;
    for (int i = 0; i < this->sides; i++)
    {
        delete this->polygon[i];
        this->polygon[i] = nullptr;
    }
    delete[] this->polygon;
    this->polygon = temp_polygon;
    this->sides = sides;
}
void Polygon::SetVertice(int whichOne, const std::string &name, const double &x, const double &y)
{
    if (whichOne < this->sides && whichOne > 0)
    {
        this->polygon[whichOne - 1]->SetName(name);
        this->polygon[whichOne - 1]->SetX(x);
        this->polygon[whichOne - 1]->SetY(y);
    }
}