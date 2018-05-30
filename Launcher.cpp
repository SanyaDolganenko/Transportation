//
// Created by Admin on 5/28/18.
//

#include <iostream>
#include "implementation/air/Plane.h"
#include "vector";
#include "implementation/land/Automobile.h"

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
    cout << "Plane" << endl;
    plane.fly(route);

    cout << endl << endl << "Automobile" << endl;

    Stop additionalStop(1242114, 214124, "Odessa");
    stops.push_back(additionalStop);
    Route autoRoute(stops, 400);
    Operator autoDriver("Boris", 15);
    Automobile automobile(autoDriver, 10, "Toyota Yaris", 100, 500, 4, 500);
    automobile.drive(autoRoute);

    return 0;
}