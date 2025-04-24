#ifndef STATION_H
#define STATION_H

#include <string>
using namespace std;

struct Location {
    int id;
    string cityName;
    string communeName;
    string districtName;
    string provinceName;
    string addressStreet;
};

class Station {
public:
    int id;
    string name;
    double latitude;
    double longitude;
    Location location;

    Station();
    Station(int id, const string& name, double lat, double lon, const Location& loc);
};

#endif // STATION_H
