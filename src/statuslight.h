#ifndef STATUSLIGHT_H
#define STATUSLIGHT_H

#include "stationcomponent.h"

class StatusLight : public StationComponent
{
public:
    explicit StatusLight(StationComponent *parent = nullptr);
};

#endif // STATUSLIGHT_H
