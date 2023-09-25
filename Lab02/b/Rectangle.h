//  File Name                         : Rectangle.h
//  Assignment and exercise number    : Lab 2 Exercise B
//  Lab section                       : B02
//  Your name                         : Nimna Findlay
//  Submission Date                   : oct 2, 2023

#include <assert.h>
#include <iostream>
#include <stdlib.h>

#infdef RECTANGLE_H
#define RECTANGLE_H

using namespace std;

class Rectangle : public rectangle {
private:
    double side_a;
    double side_b;
    double area;
    double perimeter; 

public:
    Rectangle(double x, double y, const char* name, double side_a, double side_b);
    ~Rectangle();
    double getSideA() const;
    double getSideB() const;
    void setSideA(double side_a);
    void setSideB(double side_b);
    void display() const;
    double area() const;
    double perimeter() const;
};