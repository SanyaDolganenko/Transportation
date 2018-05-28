//
// Created by Admin on 5/28/18.
//

#include "Transport.h"


Transport::Transport(Operator transportOperator, int passengersCount) {
    this->transportOperator = transportOperator;
    this->passengersCount = passengersCount;
}

Operator Transport::getTransportOperator() {
    return transportOperator;
}
