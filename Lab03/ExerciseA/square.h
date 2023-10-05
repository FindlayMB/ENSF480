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
    // Constructor
    Square(double x, double y, const char *name, double side_a);

    // Constructor Overload 1
    Square(double x, double y, double side_a, const char *name);

    // Constructor Overload 2
    Square(Point p, const char *name, double side_a);

    // Square Copy constructor
    Square(const Square &source);

    // Square Assignment operator
    Square &operator=(const Square &rhs);

    // side_a getter
    double getSideA() const;

    // side_a setter
    void setSideA(double side_a);
    virtual void display() const;

    virtual double area() const;
    virtual double perimeter() const;
};
