#include "XmlReader.h"
#include <tinyxml2.h>
#include <iostream>

using namespace tinyxml2;
using namespace std;

Station XmlReader::loadStationFromXml(const string& filename) {
    XMLDocument doc;
    Station station;

    if (doc.LoadFile(filename.c_str()) != XML_SUCCESS) {
        cerr << "Nie udało się załadować pliku XML: " << filename << endl;
        return station;
    }

    XMLElement* root = doc.FirstChildElement("Station");
    if (!root) return station;

    root->FirstChildElement("Id")->QueryIntText(&station.id);
    station.name = root->FirstChildElement("Name")->GetText();
    root->FirstChildElement("Latitude")->QueryDoubleText(&station.latitude);
    root->FirstChildElement("Longitude")->QueryDoubleText(&station.longitude);

    XMLElement* location = root->FirstChildElement("Location");
    if (location) {
        location->FirstChildElement("Id")->QueryIntText(&station.location.id);
        station.location.cityName = location->FirstChildElement("CityName")->GetText();
        station.location.communeName = location->FirstChildElement("CommuneName")->GetText();
        station.location.districtName = location->FirstChildElement("DistrictName")->GetText();
        station.location.provinceName = location->FirstChildElement("ProvinceName")->GetText();
        station.location.addressStreet = location->FirstChildElement("AddressStreet")->GetText();
    }

    return station;
}
