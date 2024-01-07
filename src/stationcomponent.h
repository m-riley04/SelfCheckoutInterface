#ifndef STATIONCOMPONENT_H
#define STATIONCOMPONENT_H

#include <QObject>

class StationComponent : public QObject
{
    Q_OBJECT
public:
    explicit StationComponent(QObject *parent = nullptr);

signals:
    // Signal for when the tool has been connected to the station
    void connected();

    // Signal for when the tool has been disconnected from the station
    void disconnected();

    // Signal for when the tool encounters an error
    void error(QString &e);
};

#endif // STATIONCOMPONENT_H
