#pragma once
#include "Measurement.h"

class Weight: public Measurement{
    public:
    explicit Weight(double value);
    Weight(Measurement& measurement);
};