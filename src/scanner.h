#ifndef SCANNER_H
#define SCANNER_H

#include "stationcomponent.h"
#include <QObject>

class Scanner : public StationComponent
{
public:
    Scanner(StationComponent *parent);
};

#endif // SCANNER_H
