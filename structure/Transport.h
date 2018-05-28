//
// Created by Admin on 5/28/18.
//

#ifndef TRANSPORTATION_TRANSPORT_H
#define TRANSPORTATION_TRANSPORT_H

#include "Rout.h"


class Transport {
public:
    Rout rout = NULL;
    int passengersCount;
    Transport(int passengersCount);

    void setRout(const Rout &rout);
};


#endif //TRANSPORTATION_TRANSPORT_H
