/*
 * File Name: main.cpp
 * Assignment: Lab 3 Exercise A
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#include "graphicsWorld.h"
int main(int argc, char const *argv[])
{
    GraphicsWorld g;
    g.run();
    return 0;
}

// Compile with the following
// g++ -o exeAmain.exe main.cpp graphicsWorld.cpp rectangle.cpp square.cpp shape.cpp point.cpp circle.cpp curveCut.cpp