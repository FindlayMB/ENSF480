
#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <stdlib.h>
#include "Resizeable.h"
#include "Moveable.h"
using std::string;

class Vehicle : public Resizeable, public Moveable
{
protected:
    string name;

public:
    Vehicle(string name);

    virtual void move() = 0;
};

#endif
