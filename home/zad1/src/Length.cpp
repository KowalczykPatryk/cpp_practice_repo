#include "Length.h"

Length::Length(double value): Measurement(value){}
Length::Length(Measurement& measurement): Length(measurement.GetValue()){}