/*
 * File Name: point.h
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#ifndef _POINT_H
#define _POINT_H
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
    Point(double x, double y);
    Point(const Point &source);
    Point &operator=(const Point &rhs);
    ~Point();

    double getX() const;
    void setX(double x);

    double getY() const;
    void setY(double y);

    int getId() const;

    double distance(const Point &otherPoint) const;
    static double distance(const Point &point1, const Point &point2);
    static int counter();
    void display() const;
    void move(double dx, double dy);
};

#endif
