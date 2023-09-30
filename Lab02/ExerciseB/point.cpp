/*
 * File Name: point.cpp
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#include <cmath>
#include "point.h"

int Point::count = 1;
int Point::autoIDnum = 1001;

Point::Point(double x, double y)
    : ID(autoIDnum)
{
    count++;
    autoIDnum++;
    this->x = x;
    this->y = y;
}

Point::Point(const Point &source)
    : ID(autoIDnum)
{
    count++;
    autoIDnum++;
    this->x = source.x;
    this->y = source.y;
}

Point &Point::operator=(const Point &rhs)
{
    if (this == &rhs)
        return *this;
    this->x = rhs.x;
    this->y = rhs.y;
    return *this;
}

Point::~Point()
{
    count--;
}

double Point::getX() const
{
    return this->x;
}

double Point::getY() const
{
    return this->y;
}

void Point::setX(double x)
{
    this->x = x;
}

void Point::setY(double y)
{
    this->y = y;
}

int Point::getId() const
{
    return this->ID;
}

int Point::counter()
{
    return count;
}

double Point::distance(const Point &point1, const Point &point2)
{
    double dx = point1.x - point2.x;
    double dy = point1.y - point2.y;
    return (std::sqrt(dx * dx + dy * dy));
}

double Point::distance(const Point &otherPoint) const
{
    return distance(*this, otherPoint);
}

void Point::display() const
{
    std::cout << "X-coordinate:\t" << this->x << std::endl;
    std::cout << "Y-coordinate:\t" << this->y << std::endl;
}

void Point::move(double dx, double dy)
{
    this->x += dx;
    this->y += dy;
}

ostream &operator<<(ostream &os, Point &p)
{
    os << "X-coordinate: " << p.x << std::endl;
    return os << "Y-coordinate: " << p.y << std::endl;
}