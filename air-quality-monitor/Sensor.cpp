#include "Sensor.h"

using namespace std;

Sensor::Sensor() {}

Sensor::Sensor(int id, int stationId, const Parameter& param)
    : id(id), stationId(stationId), param(param) {}
