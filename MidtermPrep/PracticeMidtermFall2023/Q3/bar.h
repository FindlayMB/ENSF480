// bar.h
#pragma once
#include <string.h>
#include <stdlib.h>
#include <iostream>
#include "quux.h"
class Bar : public Quux
{
protected:
    char *bar;

public:
    Bar(const char *b, const char *q);
    Bar(const Bar &src);
    Bar &operator=(const Bar &rhs);
    ~Bar() { delete[] bar; }
    void display();
};