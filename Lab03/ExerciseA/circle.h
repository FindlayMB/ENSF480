/*
 * File Name: circle.h
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#pragma once

#include "shape.h"
#include <cmath>

class Circle : virtual public Shape
{
protected:
    double radius;

public:
    // Constructor
    Circle(double x, double y, const char *name, double radius);

    // Constructor Overload 1
    Circle(double x, double y, double radius, const char *name);

    // Constructor Overload 2
    Circle(Point origin, const char *name, double radius);

    // Constructor Overload 3
    Circle(Point origin, double radius, const char *name);

    // Circle Copy constructor
    Circle(const Circle &source);

    // Circle Assignment operator
    Circle &operator=(const Circle &rhs);

    // radius getter
    double getRadius() const;

    // radius setter
    void setRadius(double radius);

    virtual void display() const;
    virtual double area() const;
    virtual double perimeter() const;
};
