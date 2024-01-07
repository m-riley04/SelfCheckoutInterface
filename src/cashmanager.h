#ifndef CASHMANAGER_H
#define CASHMANAGER_H

#include "stationcomponent.h"
#include <QObject>

class CashManager : public StationComponent
{
    //Q_OBJECT
public:
    explicit CashManager(StationComponent *parent = nullptr);

signals:
};

#endif // CASHMANAGER_H
