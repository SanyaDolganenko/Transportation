//
// Created by Admin on 5/28/18.
//

#ifndef TRANSPORTATION_FLYABLE_H
#define TRANSPORTATION_FLYABLE_H

#include "../base/Route.h"

class Flyable {
public:
    virtual void fly(Route route) = 0;
};


#endif //TRANSPORTATION_FLYABLE_H
