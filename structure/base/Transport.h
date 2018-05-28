//
// Created by Admin on 5/28/18.
//

#ifndef TRANSPORTATION_TRANSPORT_H
#define TRANSPORTATION_TRANSPORT_H

#include "Route.h"


class Transport {
public:
    Route rout = NULL;
    int passengersCount;
    Transport(int passengersCount);

    void setRout(const Route &rout);
};


#endif //TRANSPORTATION_TRANSPORT_H
