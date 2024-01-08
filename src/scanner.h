#ifndef SCANNER_H
#define SCANNER_H

#include "stationcomponent.h"
#include <QObject>

class Scanner : public StationComponent
{
public:
    Scanner(StationComponent *parent);

    void setActive(bool active);
    std::string readBarcode(QByteArray bytes);

signals:
    void itemScanned();
    void itemNotFound();
    void itemNotAvailable();

private:
    bool active;
};

#endif // SCANNER_H
