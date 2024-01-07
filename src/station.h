#ifndef STATION_H
#define STATION_H

#include <QObject>
#include "camera.h"
#include "cardreader.h"
#include "cashmanager.h"
#include "handheldscanner.h"
#include "receiptprinter.h"
#include "scale.h"
#include "scanner.h"
#include "statuslight.h"

class Station : public QObject
{
    Q_OBJECT
public:
    explicit Station(QObject *parent = nullptr);

private:
    unsigned short int id;
    double salesTaxPercentage;
    double subtotal;
    double salesTaxTotal;
    double total;
signals:
};

#endif // STATION_H
