//
// Created by Admin on 5/28/18.
//

#include "implementation/air/Plane.h"
#include "vector";

using namespace std;

int main() {
    vector<Stop> stops;
    Stop initialStop(123421, 124214, "Kharkov");
    Stop destinationStop(92414, 841294, "Kiev");
    stops.push_back(initialStop);
    stops.push_back(destinationStop);
    Route route(stops, 180);
    Operator planePilot("Oleksandr", 12);
    Plane plane(planePilot, 1234, 200, 10000, 900, 20000);
    plane.fly(route);
//    plane.fly()
    return 0;
}