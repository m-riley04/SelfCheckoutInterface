#ifndef STATUSLIGHT_H
#define STATUSLIGHT_H

#include "stationcomponent.h"

#define OFF = 0;
#define URGENT = 1;
#define WAITING = 2;
#define HELP_REQUESTED = 3;
#define AGE_CHECK = 4;
#define READY = 5;

/* A class for communicating to the station status light. The status light has a few different status':
 *
 * OFF: the station is not active/is shutdown
 *
 * URGENT: the customer is in need of urgent assistance
 *
 * WAITING: the customer has been waiting for assistance for a while
 *
 * HELP_REQUESTED: the customer has requested for assistance
 *
 * READY: the station is ready for the next customer
 * */
class StatusLight : public StationComponent
{
    //Q_OBJECT
public:
    explicit StatusLight(StationComponent *parent = nullptr);
private:
    short int status;

signals:

    // Signal for when status light has changed
    void changed();

};

#endif // STATUSLIGHT_H
