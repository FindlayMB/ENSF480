//  File Name                         : Square.h
//  Assignment and exercise number    : Lab 2 Exercise B
//  Lab section                       : B02
//  Your name                         : Nimna Findlay
//  Submission Date                   : oct 2, 2023

#include <assert.h>
#include <iostream>
#include <stdlib.h>


#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

using namespace std;

class Square : public Shape {
private:
    double side_a;
    double area;
    double perimeter;

public:
    Square(double x, double y, const char* name, double side_a);
    ~Square();
    double getSide() const;
    void setSide(double side);
    void display() const;
    double area() const;
    double perimeter() const;
};

#endif