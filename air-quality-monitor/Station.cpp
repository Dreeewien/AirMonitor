#include "Station.h"

using namespace std;

Station::Station() {}

Station::Station(int id, const string& name, double lat, double lon, const Location& loc)
    : id(id), name(name), latitude(lat), longitude(lon), location(loc) {}
