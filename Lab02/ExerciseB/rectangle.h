/*
 * File Name: rectangle.h
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#ifndef _RECTANGLE_H
#define _RECTANGLE_H

#include "square.h"
using namespace std;

class Rectangle : public Square
{
private:
    double side_b;

public:
    Rectangle(double x, double y, const char *name, double side_a, double side_b);
    Rectangle(double x, double y, double side_a, double side_b, const char *name);

    Rectangle(const Rectangle &source);
    Rectangle &operator=(const Rectangle &rhs);

    double getSideB() const;
    void setSideB(double side_b);
    void display() const;
    double area() const;
    double perimeter() const;
};

#endif