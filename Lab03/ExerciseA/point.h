/*
 * File Name: point.h
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 11, 2023
 */

#pragma once

#include <assert.h>
#include <iostream>
#include <stdlib.h>

using namespace std;
class Point
{
    friend ostream &operator<<(ostream &os, Point &p);

private:
    double x;
    double y;
    const int ID;
    static int count;
    static int autoIDnum;

public:
    // Constructor
    Point(double x, double y);

    // Constructor Overload 1
    Point(const Point &source);

    // Point Assignment operator
    Point &operator=(const Point &rhs);

    // Point Destructor
    ~Point();

    // x getter
    double getX() const;

    // x setter
    void setX(double x);

    // y getter
    double getY() const;

    // y setter
    void setY(double y);

    int getId() const;

    double distance(const Point &otherPoint) const;
    static double distance(const Point &point1, const Point &point2);
    static int counter();
    void display() const;
    void move(double dx, double dy);
};
