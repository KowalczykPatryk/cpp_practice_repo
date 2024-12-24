#ifndef POINT_H
#define POINT_H
#include <string>

class Point
{
    private:
        double x;
        double y;
        std::string name;
    public:
        Point();
        Point(const std::string &name);
        Point(const std::string &name, const double &x, const double &y);
        void Presentation () const;
        void SetName(const std::string &name);
        void SetX(const double &x);
        void SetY(const double &y);
        std::string getName();
        double getX();
        double getY();
};

#endif