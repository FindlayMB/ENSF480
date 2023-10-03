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
    Circle(double x, double y, const char *name, double radius);
    Circle(double x, double y, double radius, const char *name);
    Circle(Point origin, const char *name, double radius);
    Circle(Point origin, double radius, const char *name);
    Circle(const Circle &source);
    Circle &operator=(const Circle &rhs);

    double getRadius() const;
    void setRadius(double radius);

    void display() const;
    double area() const;
    double perimeter() const;
};
