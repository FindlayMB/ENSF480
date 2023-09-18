/*
 * File Name: human_program.cpp
 * Assignment: Lab 1 Exercise D
 * Lab Section: B02
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */

// run with
// g++ -Wall -o human_program human_program.cpp human.cpp point.cpp
// if only human.h is included
#include "human.h"

// if human.cpp and point.cpp are included
// run in terminal with: g++ -Wall -o human_program human_program.cpp
// or VSCode Run Code button (Ctrl+Alt+N)
// #include "human.cpp"
// #include "point.cpp"

int main(int argc, char **argv)
{
    double x = 2000, y = 3000;
    Human h("Ken Lai", x, y);
    h.display();
    return 0;
}
