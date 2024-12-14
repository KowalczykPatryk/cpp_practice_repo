#ifndef STUDENT_H
#define STUDENT_H
#include "Course.h"

class Student
{
    private:
        std::string name;
        Course *courses;
        int numberOfCourses;
    public:
        Student();
        Student(const std::string& name);
        Student(const std::string& name, Course& course1);
        void Presentation();
        void SetName(const std::string name);
        Course *GetCourses();
        Student(std::string name, int numberOfCourses, Course *courseArray);
};

#endif