//  File Name                         : Shape.h
//  Assignment and exercise number    : Lab 2 Exercise B
//  Lab section                       : B02
//  Your name                         : Nimna Findlay
//  Submission Date                   : oct 2, 2023

#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include "Point.h"
#ifndef SHAPE_H
#define SHAPE_H

Class Shape : public shape
{
    
    private:
        Point origin;
        char* ShapeName;

    public:
        Shape(double x, double y, char* name);
        ~Shape();
        const Point& getOrigin() const;
        const char* getName() const;
        void display() const;
        double distance(Shape& other);
        static double distance(Shape& shape1, Shape& shape2);
        void move(double dx, double dy);
}
#endif