/*
 * File Name: point.cpp
 * Assignment: Lab 1 Exercise D
 * Lab Section: B02
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */
#include "point.h"

Point::Point(const double a, const double b)
{
    this->x = a;
    this->y = b;
}
Point::Point(const Point &source)
{
    this->x = source.x;
    this->y = source.y;
}

const double Point::get_x() const
{ // X getter
    return this->x;
}

void Point::set_x(const double a)
{ // X setter
    this->x = a;
}

const double Point::get_y() const
{ // Y getter
    return this->y;
}

void Point::set_y(const double b)
{ // Y setter
    this->y = b;
}

void Point::set_point(const double a, const double b)
{ // Point setter
    this->x = a;
    this->y = b;
}
