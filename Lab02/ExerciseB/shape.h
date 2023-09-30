/*
 * File Name: shape.h
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#ifndef _SHAPE_H
#define _SHAPE_H
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
    Shape(double x, double y, const char *name);
    Shape(Point origin, const char *name);
    Shape(const Shape &source);
    Shape &operator=(const Shape &rhs);
    ~Shape();

    const Point &getOrigin() const;
    const char *getName() const;
    void setName(const char *name);

    virtual void display() const;

    double distance(Shape &other);
    static double distance(Shape &shape1, Shape &shape2);

    void move(double dx, double dy);
    virtual double area() const = 0;
};
#endif