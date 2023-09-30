// File Name                         : Square.h
// Assignment and exercise number    : Lab 2 Exercise B
// Lab section                       : B02
// Your name                         : Nimna Findlay
// Submission Date                   : Oct 2, 2023

#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"

using namespace std;

class Square : public Shape {
private:
    double side_a;
public:
    Square(double x, double y, const char* name, double sideA);
    ~Square();
    double getSide() const;
    void setSide(double side);
    void display() const;
    double calculateArea() const;
    double calculatePerimeter() const;
};

#endif
