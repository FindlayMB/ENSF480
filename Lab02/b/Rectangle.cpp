//  File Name                         : Rectangle.cpp
//  Assignment and exercise number    : Lab 2 Exercise B
//  Lab section                       : B02
//  Your name                         : Nimna Findlay
//  Submission Date                   : oct 2, 2023

#include <assert.h>
#include <iostream>
#include <stdlib.h>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double x, double y, const char* name, double side_a, double side_b) : Shape(x, y, name){
    this->side_a = side_a;
    this->side_b = side_b;
}

double Rectangle::getSideA() const{
    return side_a;
}

double Rectangle::getSideB() const{
    return side_b;
}

void Rectangle::setSideA(double side_a){
    this->side_a = side_a;
}

void Rectangle::setSideB(double side_b){
    this->side_b = side_b;
}

void Rectangle::display() const {
    std::cout << "Rectangle Name: " << getName() << std::endl;
    std::cout << "X-coordinate: " << getOrigin().getX() << std::endl;
    std::cout << "Y-coordinate: " << getOrigin().getY() << std::endl;
    std::cout << "Side a: " << side_a << std::endl;
    std::cout << "Side b: " << side_b << std::endl;
    std::cout << "Area: " << area() << std::endl;
    std::cout << "Perimeter: " << perimeter() << std::endl;
}

double Rectangle::perimeter() const{
    return (side_a * 2) + (side_b * 2);
}

Rectangle::~Rectangle(){
    delete[] name;
}       

