// quux.h
#pragma once
#include <string.h>
#include <stdlib.h>
#include <iostream>
class Quux
{
protected:
    char *quux;

public:
    Quux(const char *q);
    ~Quux() { delete[] quux; }
    Quux(const Quux &src);
    Quux &operator=(const Quux &rhs);
    void display();
};