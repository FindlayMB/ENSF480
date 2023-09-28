// File Name                         : Shape.h
// Assignment and exercise number    : Lab 2 Exercise B
// Lab section                       : B02
// Your name                         : Nimna Findlay
// Submission Date                   : Oct 2, 2023

#ifndef SHAPE_H
#define SHAPE_H

#include "Point.h"

class Shape {
private:
    Point origin;
    char* shapeName;

public:
    Shape(double x, double y, const char* name);
    virtual ~Shape(); // make the dectructor virtual so the shape class is abstract
    virtual const Point& getOrigin() const = 0;                 // Pure virtual function
    virtual const char* getName() const = 0;                    // Pure virtual function
    virtual void display() const = 0;                           // Pure virtual function
    virtual double distance(Shape& other) = 0;                  // Pure virtual function
    virtual double distance(Shape& shape1, Shape& shape2) = 0;  // Pure virtual function
    virtual void move(double dx, double dy) = 0;                // Pure virtual function
};

#endif
