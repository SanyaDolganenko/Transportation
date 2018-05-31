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

    void printCharacteristics();

    virtual void printEngineType() = 0;
};


#endif //TRANSPORTATION_TRANSPORT_H
