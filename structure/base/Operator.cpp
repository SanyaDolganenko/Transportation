//
// Created by Admin on 5/28/18.
//

#include "Operator.h"
#include "iostream"

using namespace std;

Operator::Operator(char *name, int yearsExp) : name(name), yearsExp(yearsExp) {}


void Operator::print() {
    cout << "Operator name: " << name << endl << "Operator years experience: " << yearsExp << endl;
}

