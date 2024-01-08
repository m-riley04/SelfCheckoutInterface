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
    // Signal for when cash machine dispenses cash
    void dispensedCash(double total);
    // Signal for when a cash bill has been inputted
    void billInputted();
    // Signal for when a coin has been inputted
    void coinInputted();
};

#endif // CASHMANAGER_H
