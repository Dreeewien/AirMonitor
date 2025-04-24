#ifndef MEASUREMENT_H
#define MEASUREMENT_H

#include <string>
using namespace std;

class Measurement {
public:
    string date;   // Data pomiaru jako tekst (np. "2024-04-24 14:00:00")
    double value;       // Wartość może być null w JSON, więc możemy reprezentować jako np. std::optional<double>

    Measurement();
    Measurement(const string& date, double value);
};

#endif // MEASUREMENT_H
