//
// Created by Admin on 5/28/18.
//

#include <iostream>
#include "implementation/air/Plane.h"
#include "vector";
#include "implementation/land/Automobile.h"
#include "implementation/hybrid/FlyingCar.h"

using namespace std;

void demoHybridCar() {
    cout << endl << endl << "Hybrid demo" << endl;
    vector<Stop>
            stopsFlying;
    Stop initialStop(123421, 124214, "Odessa");
    Stop destinationStop(92414, 841294, "Kiev");
    stopsFlying.push_back(initialStop);
    stopsFlying.push_back(destinationStop);
    Route flyingRoute(stopsFlying, 180);

    vector<Stop> stopsDriving;
    Stop initialDriveStop(123421, 124214, "Kiev");
    Stop destinationDriveStop(92414, 841294, "Kharkov");
    stopsDriving.push_back(initialDriveStop);
    stopsDriving.push_back(destinationDriveStop);
    Route drivingRoute(stopsFlying, 180);

    Operator planePilot("Cool pilot", 12);
    FlyingCar hybrid(planePilot, 1234, 5, 4000, 500, 500, "Super hybrid Nissan", 200, 400, 4, 1000);
    hybrid.startTrip(flyingRoute, drivingRoute);
}

int main() {
    vector<Stop> stops;
    Stop initialStop(123421, 124214, "Kharkov");
    Stop destinationStop(92414, 841294, "Kiev");
    stops.push_back(initialStop);
    stops.push_back(destinationStop);
    Route route(stops, 180);
    Operator planePilot("Oleksandr", 12);
    Plane *plane = new Plane(planePilot, 1234, 200, 10000, 900, 20000);
    cout << "Plane" << endl;
//    plane->fly(route);
    plane->printCharacteristics();


    cout << endl << endl << "Automobile" << endl;

    Stop additionalStop(1242114, 214124, "Odessa");
    stops.push_back(additionalStop);
    Route autoRoute(stops, 400);
    Operator autoDriver("Boris", 15);
    Automobile automobile(autoDriver, 10, "Toyota Yaris", 100, 500, 4, 500);
    automobile.drive(autoRoute);
    automobile.printCharacteristics();
    demoHybridCar();

    return 0;
}