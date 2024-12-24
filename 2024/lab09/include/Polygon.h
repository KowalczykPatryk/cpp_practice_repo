#ifndef POLYGON_H
#define POLYGON_H
#include "Point.h"
#include <string>

class Polygon
{
    private:
        std::string name;
        int sides;
        Point **polygon;
    public:
        /** @brief Default constructor.
        *
        * Methodatworzy obiekt
        *
        * @return constructor nic nie zwraca \n
        */
        Polygon();
        Polygon(const std::string &name);
        Polygon(const std::string &name, const Point &one, const Point &two, const Point &three);
        Polygon(const std::string &name, const Point &one, const Point &two, const Point &three, const Point &four);
        Polygon(const std::string &name, int sides, Point *points);
        ~Polygon();
        void Presentation();
        void SetName(const std::string &name);
        Point *GetVertices();
        void SetNewVertices(int sides, Point *points);
        void SetVertice(int whichOne, const std::string &name, const double &x, const double &y);
};

#endif