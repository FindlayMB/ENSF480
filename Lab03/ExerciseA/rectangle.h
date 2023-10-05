/*
 * File Name: rectangle.h
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#pragma once

#include "square.h"
using namespace std;

class Rectangle : virtual public Square
{
protected:
    double side_b;

public:
    // Constructor
    Rectangle(double x, double y, const char *name, double side_a, double side_b);

    // Constructor Overload 1
    Rectangle(double x, double y, double side_a, double side_b, const char *name);

    // Constructor Overload 2
    Rectangle(Point origin, double side_a, double side_b, const char *name);

    // Constructor Overload 3
    Rectangle(Point origin, const char *name, double side_a, double side_b);

    // Rectangle Copy constructor
    Rectangle(const Rectangle &source);

    // Rectangle Assignment operator
    Rectangle &operator=(const Rectangle &rhs);

    // side_b getter
    double getSideB() const;

    // side_b setter
    void setSideB(double side_b);

    virtual void display() const;
    virtual double area() const;
    virtual double perimeter() const;
};
