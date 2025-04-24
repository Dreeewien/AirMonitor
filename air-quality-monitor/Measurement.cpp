#include "Measurement.h"
using namespace std;

Measurement::Measurement() : value(0.0) {}

Measurement::Measurement(const string& date, double value)
    : date(date), value(value) {}
