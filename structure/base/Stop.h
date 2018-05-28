//
// Created by Admin on 5/28/18.
//

#ifndef TRANSPORTATION_STOP_H
#define TRANSPORTATION_STOP_H


class Stop {
public:
    int xCoordinate;
    int yCoordinate;
    char *stopName;

    Stop(int xCoordinate, int yCoordinate, char *stopName);
};


#endif //TRANSPORTATION_STOP_H
