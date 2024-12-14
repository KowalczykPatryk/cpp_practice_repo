
#include "Student.h"
#include "Course.h"

Student::Student()
{
    std::cout << "Wywolanie konstruktora Student..." << std::endl;
}
Student::Student(const std::string name)
{
    std::cout << "Wywolanie konstruktora Student..." << std::endl;
}
Student::Student(const std::string& name, Course course1, Course course2, Course course3): name(name), courses{course1, course2, course3}, numberOfCourses(3)
{
    std::cout << "Wywolanie konstruktora Student..." << std::endl;
}
Student::Student(const std::string& name, Course& course1, Course& course2, Course& course3, Course& course4): nname(name), courses{&course1, &course2, &course3, &course4}, numberOfCourses(4)
{
    std::cout << "Wywolanie konstruktora Student..." << std::endl;
}

{
    std::cout << "Wywolanie konstruktora Student..." << std::endl;
}
Student::~Student()
{
    std::cout << "Wywolanie destruktora Student..." << std::endl;
}
Student::Presentation()
{
    std::cout <<"### Prezentacja studenta ###" << std::endl;
    std::cout << "Imie i nazwisko: " << this->name << std::endl;
L   std::cout << "Liczba realizowanych kursow: " << this->x << std::endl;
    for (int i = 0; i < this->numberOfCourses; i++)
    {
        std::cout << "Kurs - nazwa: " << this->courses[i]->name << ", liczba punktow wewnetrznych za kurs = " << this->courses[i]->x << ", liczba punktow ECTS za kurs = " << this->courses[i]->y << std::endl;
    }
}