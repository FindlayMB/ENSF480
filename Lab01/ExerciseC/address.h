/*
 * File Name: address.h
 * Assignment: Lab 1 Exercise C
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */
#ifndef ADDRESS
#define ADDRESS

#include <string>
using namespace std;

class Address
{

private:
    string street;
    string postalCode;
    string city;
    string country;

public:
    Address();  // ctor
    ~Address(); // dtor
};

#endif