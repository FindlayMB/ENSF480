// File Name                         : Rectangle.h
// Assignment and exercise number    : Lab 2 Exercise B
// Lab section                       : B02
// Your name                         : Nimna Findlay
// Submission Date                   : Oct 2, 2023

#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Square.h"

using namespace std;

class Rectangle : public Square {
private:
    double side_b;

public:
    Rectangle(double x, double y, const char* name, double sideA, double sideB);
    ~Rectangle();
    double getSideA() const;
    double getSideB() const;
    void setSideA(double sideA);
    void setSideB(double sideB);
    void display() const;
    double calculateArea() const;
    double calculatePerimeter() const;
};

#endif
