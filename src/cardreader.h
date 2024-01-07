#ifndef CARDREADER_H
#define CARDREADER_H

#include "stationcomponent.h"

class CardReader : public StationComponent
{
    Q_OBJECT
public:
    explicit CardReader(QObject *parent = nullptr);

signals:
};

#endif // CARDREADER_H
