/*
 * File Name: shape.h
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#pragma once

#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "point.h"

class Shape
{
protected:
    Point origin;
    char *shapeName;

public:
    // Constructor
    Shape(double x, double y, const char *name);

    // Constructor Overload 1
    Shape(Point origin, const char *name);

    // Shape Copy constructor
    Shape(const Shape &source);

    // Shape Assignment operator
    Shape &operator=(const Shape &rhs);

    // Shape Destructor
    virtual ~Shape();

    // origin getter
    const Point &getOrigin() const;

    // name getter
    const char *getName() const;

    // name setter
    void setName(const char *name);

    double distance(Shape &other);
    static double distance(Shape &shape1, Shape &shape2);

    void move(double dx, double dy);

    virtual void display() const;
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};
