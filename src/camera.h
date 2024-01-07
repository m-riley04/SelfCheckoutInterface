#ifndef CAMERA_H
#define CAMERA_H

#include "stationcomponent.h"
#include <QObject>

class Camera : public StationComponent
{
    //Q_OBJECT
public:
    explicit Camera(StationComponent *parent = nullptr);

signals:
};

#endif // CAMERA_H
