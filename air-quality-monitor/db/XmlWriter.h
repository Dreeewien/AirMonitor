#ifndef XMLWRITER_H
#define XMLWRITER_H

#include "../model/Station.h"

class XmlWriter {
public:
    static bool saveStationToXml(const Station& station, const std::string& filename);
};

#endif // XMLWRITER_H
