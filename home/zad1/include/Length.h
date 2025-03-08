#pragma once
#include "Measurement.h"

class Length: public Measurement
{
public:
    explicit Length(double value);
    explicit Length(Measurement& measurement);
};