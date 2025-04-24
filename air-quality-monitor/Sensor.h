#ifndef SENSOR_H
#define SENSOR_H

#include <string>
using namespace std;

struct Parameter {
    string paramName;
    string paramFormula;
    string paramCode;
    int idParam;
};

class Sensor {
public:
    int id;
    int stationId;
    Parameter param;

    Sensor();
    Sensor(int id, int stationId, const Parameter& param);
};

#endif // SENSOR_H
