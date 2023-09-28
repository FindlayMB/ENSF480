//  File Name                         : Point.h
//  Assignment and exercise number    : Lab 2 Exercise B
//  Lab section                       : B02
//  Your name                         : Nimna Findlay
//  Submission Date                   : oct 2, 2023

#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include <cmath>

using namespace std;
#ifndef POINT_H
#define POINT_H

class Point {
private:
    double x;
    double y;
    static int count;  
    int id;  

public:
    Point(double x, double y);

    double getX() const;
    double getY() const;
    int getId() const;

    void setX(int x);
    void setY(int y);
    void display() const;
    static int counter();

    float distance(const Point& otherPoint) const;
    static float distance(const Point& point1, const Point& point2);
};

#endif
