#pragma once

#include <iostream>
class Functor
{
private:
    int aLessb;
    int aEqualb;
    int aGreaterb;
public:
    Functor();
    bool operator()(int a, int b);
    void wypiszStatystyki();
};