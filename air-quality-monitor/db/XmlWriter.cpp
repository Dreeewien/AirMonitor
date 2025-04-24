#include "XmlWriter.h"
#include <tinyxml2.h>
#include <iostream>

using namespace tinyxml2;
using namespace std;

bool XmlWriter::saveStationToXml(const Station& station, const string& filename) {
    XMLDocument doc;

    XMLElement* root = doc.NewElement("Station");
    doc.InsertFirstChild(root);

    root->InsertNewChildElement("Id")->SetText(station.id);
    root->InsertNewChildElement("Name")->SetText(station.name.c_str());
    root->InsertNewChildElement("Latitude")->SetText(station.latitude);
    root->InsertNewChildElement("Longitude")->SetText(station.longitude);

    XMLElement* location = doc.NewElement("Location");
    location->InsertNewChildElement("Id")->SetText(station.location.id);
    location->InsertNewChildElement("CityName")->SetText(station.location.cityName.c_str());
    location->InsertNewChildElement("CommuneName")->SetText(station.location.communeName.c_str());
    location->InsertNewChildElement("DistrictName")->SetText(station.location.districtName.c_str());
    location->InsertNewChildElement("ProvinceName")->SetText(station.location.provinceName.c_str());
    location->InsertNewChildElement("AddressStreet")->SetText(station.location.addressStreet.c_str());

    root->InsertEndChild(location);

    XMLError eResult = doc.SaveFile(filename.c_str());
    if (eResult != XML_SUCCESS) {
        cerr << "Błąd zapisu do pliku XML: " << eResult << endl;
        return false;
    }

    return true;
}