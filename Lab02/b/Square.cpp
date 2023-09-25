//  File Name                         : Square.cpp
//  Assignment and exercise number    : Lab 2 Exercise B
//  Lab section                       : B02
//  Your name                         : Nimna Findlay
//  Submission Date                   : oct 2, 2023

#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include "Square.h"

using namespace std;

Square::Square(double x, double y, double side){
    side_a = side;
}

double Square::getSide() const{
    return side_a;
}

void Square::setSide(double side){
    side_a = side;
}

void Square::display() const {
    std::cout << "Square Name: " << getName() << std::endl;
    std::cout << "X-coordinate: " << getOrigin().getX() << std::endl;
    std::cout << "Y-coordinate: " << getOrigin().getY() << std::endl;
    std::cout << "Side a: " << side_a << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;
}


double Square::area() const{
    return side_a * side_a;
}

double Square::perimeter() const{
    return side_a * 4;
}

Square::~Square(){
    delete[] name;
}

