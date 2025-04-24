#ifndef XMLREADER_H
#define XMLREADER_H

#include "../model/Station.h"

class XmlReader {
public:
    static Station loadStationFromXml(const std::string& filename);
};

#endif // XMLREADER_H
