#ifndef SCALE_H
#define SCALE_H

#include "stationcomponent.h"
#include <QObject>

/* A class that represents the scale component for weighing foods and produce. Measures in pounds. */
class Scale : public StationComponent
{
    //Q_OBJECT
public:
    explicit Scale(double weight = 0.00, double maxWeight = 30.00, StationComponent *parent = nullptr);

    void zero();

signals:
    void scaleMoved();
    void itemWeighed();

private:
    double weight;
    double maxWeight;
};

#endif // SCALE_H
