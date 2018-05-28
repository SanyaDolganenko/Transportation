//
// Created by Admin on 5/28/18.
//

#ifndef TRANSPORTATION_TRANSPORT_H
#define TRANSPORTATION_TRANSPORT_H


#include "Operator.h"

class Transport {
public:
    int passengersCount;
    Operator transportOperator = Operator(nullptr, 0);

    Transport(Operator transportOperator, int passengersCount);

    virtual Operator getTransportOperator();
};


#endif //TRANSPORTATION_TRANSPORT_H
