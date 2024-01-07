#ifndef SCALE_H
#define SCALE_H

#include "stationcomponent.h"
#include <QObject>

class Scale : public StationComponent
{
    //Q_OBJECT
public:
    explicit Scale(StationComponent *parent = nullptr);

signals:
};

#endif // SCALE_H
