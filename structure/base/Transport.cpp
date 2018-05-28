//
// Created by Admin on 5/28/18.
//

#include "Transport.h"

Transport::Transport(int passengersCount) : passengersCount(passengersCount) {
}

void Transport::setRout(const Route &rout) {
    Transport::rout = rout;
}


