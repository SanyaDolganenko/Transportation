//
// Created by Admin on 5/30/18.
//

#ifndef TRANSPORTATION_LANDTRANSPORT_H
#define TRANSPORTATION_LANDTRANSPORT_H


#include "../base/Transport.h"
#include "Drivable.h"

class LandTransport : public Transport, public Drivable {
public:
    char *transportName;

    LandTransport(Operator driver, int passengersCount, char *transportName);

    void printCharacteristics() override;
};


#endif //TRANSPORTATION_LANDTRANSPORT_H
