#ifndef COURSE_H
#define COURSE_H

class Course
{
    private:
        std::string name;
        double x;
        double y;
    public:
        Course();
        Course(const std::string& name);
        Course(const std::string& name, double x, double y);
        void SetName(std::string name);
        void SetX(double x);
        void SetY(double y);
        std::string GetName();
        double GetX() const;
        double GetY() const;
        void Presentation();
};
#endif