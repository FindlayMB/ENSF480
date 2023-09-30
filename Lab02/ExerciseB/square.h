/*
 * File Name: square.h
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#ifndef _SQUARE_H
#define _SQUARE_H
#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include "shape.h"

using namespace std;

class Square : public Shape
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

#endif