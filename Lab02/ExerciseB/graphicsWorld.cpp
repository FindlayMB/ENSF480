/*
 * File Name: graphicsWorld.cpp
 * Assignment: Lab 2 Exercise B
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#include "graphicsWorld.h"
#include <iostream>
using namespace std;

void GraphicsWorld::run()
{
#if 1
    // Change 0 to 1 to test Point
    Point m(6, 8);
    Point n(6, 8);
    n.setX(9);
    cout << "\nExpected to display the distance between m and n is: 3";
    cout << "\nThe distance between m and n is: " << m.distance(n);
    cout << "\nExpected second version of the distance function also print: 3";
    cout << "\nThe distance between m and n is again: " << Point::distance(m, n);
#endif // end of block to test Point
#if 1  // Change 0 to 1 to test Square
    cout << "\n\nTesting Functions in class Square:" << endl;
    Square s(5, 7, 12, "SQUARE - S");
    s.display();
#endif // end of block to test Square
#if 1
    // Change 0 to 1 to test Rectangle
    cout << "\nTesting Functions in class Rectangle:";
    Rectangle a(5, 7, 12, 15, "RECTANGLE A");
    a.display();
    Rectangle b(16, 7, 8, 9, "RECTANGLE B");
    b.display();
    double d = a.distance(b);
    cout << "\nDistance between square a, and b is: " << d << endl;
    Rectangle rec1 = a;
    rec1.display();
    cout << "\nTesting assignment operator in class Rectangle:" << endl;
    Rectangle rec2(3, 4, 11, 7, "RECTANGLE rec2");
    rec2.display();
    rec2 = a;
    a.setSideA(200);
    a.setSideA(100);
    cout << "\nExpected to display the following values for object rec2: " << endl;
    cout << "Rectangle Name:\tRECTANGLE A\n"
         << "X-coordinate:\t5\n"
         << "Y-coordinate:\t7\n"
         << "Side a:\t\t12\n"
         << "Side b:\t\t15\n"
         << "Area:\t\t180\n"
         << "Perimeter:\t54\n";
    cout << "\nIf it doesn't, there is a problem with your assignment operator.\n"
         << endl;
    rec2.display();
    cout << "\nTesting copy constructor in class Rectangle:" << endl;
    Rectangle rec3(a);
    rec3.display();
    a.setSideB(300);
    a.setSideA(400);
    cout << "\nExpected to display the following values for object rec3: " << endl;
    cout << "Rectangle Name:\tRECTANGLE A\n"
         << "X-coordinate:\t5\n"
         << "Y-coordinate:\t7\n"
         << "Side a:\t\t100\n"
         << "Side b:\t\t200\n"
         << "Area:\t\t20000\n"
         << "Perimeter:\t600\n";
    cout << "\nIf it doesn't, there is a problem with your assignment operator.\n"
         << endl;
    rec3.display();
#endif // end of block to test Rectangle
#if 1
    // Change 0 to 1 to test using an array of pointers and polymorphism
    cout << "\nTesting array of pointers and polymorphism:" << endl;
    Shape *sh[4];
    sh[0] = &s;
    sh[1] = &b;
    sh[2] = &rec1;
    sh[3] = &rec3;
    sh[0]->display();
    sh[1]->display();
    sh[2]->display();
    sh[3]->display();
#endif // end of block to test array of pointer and polymorphism
}
