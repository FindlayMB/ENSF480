/*
 * File Name: curveCut.h
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */
#pragma once

#include "circle.h"
#include "rectangle.h"

class CurveCut : public Circle, public Rectangle
{

public:
    // Constructor Overload 1
    CurveCut(double x, double y, const char *name,
             double side_a, double side_b, double radius);
    // Constructor Overload 2
    CurveCut(double x, double y, double side_a,
             double side_b, double radius, const char *name);

    // CurveCut Copy constructor
    CurveCut(const CurveCut &source);

    // CurveCut Assignment operator
    CurveCut &operator=(const CurveCut &rhs);

    void display() const;
    double area() const;
    double perimeter() const;
};
