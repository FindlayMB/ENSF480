/*
 * File Name: square.h
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#pragma once

#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include "shape.h"

using namespace std;

class Square : virtual public Shape
{
protected:
    double side_a;

public:
    Square(double x, double y, const char *name, double side_a);
    Square(double x, double y, double side_a, const char *name);
    Square(Point p, const char *name, double side_a);
    Square(const Square &source);
    Square &operator=(const Square &rhs);

    double getSideA() const;
    void setSideA(double side_a);
    virtual void display() const;

    virtual double area() const;
    virtual double perimeter() const;
};
