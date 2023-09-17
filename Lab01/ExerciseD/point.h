/*
 * File Name: point.h
 * Assignment: Lab 1 Exercise D
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */

#ifndef POINT
#define POINT

class Point
{
private:
    double x; // x coordinate of a location on Cartisian Plain
    double y; // y coordinate of a location on Cartisian Plain
public:
    Point(const double a = 0, const double b = 0);
    // Constructor with 2 parameters
    // PROMISES: Creates a Point object with x = a and y = b

    Point(const Point &source);
    // Copy constructor

    const double get_x() const;
    // X getter
    // PROMISES: The value of x as a double

    const double get_y() const;
    // Y getter
    // PROMISES: The value of y as a double

    void set_x(const double a);
    // X setter
    // REQUIRES: a to be a double

    void set_y(const double b);
    // Y setter
    // REQUIRES: b to be a double
};

#endif