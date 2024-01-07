#ifndef RECEIPTPRINTER_H
#define RECEIPTPRINTER_H

#include "stationcomponent.h"

class ReceiptPrinter : public StationComponent
{
    //Q_OBJECT
public:
    explicit ReceiptPrinter(StationComponent *parent = nullptr);

signals:
};

#endif // RECEIPTPRINTER_H
