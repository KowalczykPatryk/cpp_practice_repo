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
    int operator()(int a, int b);
    void wypiszStatystyki();
};