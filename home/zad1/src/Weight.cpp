#include "Weight.h"

Weight::Weight(double value): Measurement(value){}
Weight::Weight(Measurement& measurement): Weight(measurement.GetValue()){}