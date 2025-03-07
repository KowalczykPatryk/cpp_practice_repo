#pragma once
#include <string>
#include <iostream>

class Shape{
private:
    std::string name;
public:
    const std::string& getName() const;
    void setName(const std::string& name);
    virtual double Area() const = 0;
    virtual void print(std::ostream& os) const = 0;
    friend std::ostream& operator<<(std::ostream& os, const Shape& shape);
};