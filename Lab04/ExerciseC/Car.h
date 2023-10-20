
#ifndef CAR_H
#define CAR_H

#include "Vehicle.h"

class Car final : public Vehicle
{
private:
    int seats;

public:
    void turn();
    void move();
    void enlarge(int n);
    void shrink(int n);
    void forward();
    void backward();
};

#endif