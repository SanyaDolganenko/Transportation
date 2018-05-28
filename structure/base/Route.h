//
// Created by Admin on 5/28/18.
//

#ifndef TRANSPORTATION_ROUT_H
#define TRANSPORTATION_ROUT_H

#include <vector>
#include "Stop.h"

using namespace std;

class Route {
public:
    vector<Stop> stops;
    int durationMin;

    Route(const vector<Stop> &stops, int durationMin);
};


#endif //TRANSPORTATION_ROUT_H
