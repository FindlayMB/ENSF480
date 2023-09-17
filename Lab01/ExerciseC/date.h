/*
 * File Name: date.h
 * Assignment: Lab 1 Exercise C
 * Completed by: Findlay Brown, David Rodriguez
 * Submission Date: Sept 20, 2023
 */
#ifndef DATE
#define DATE

class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date();  // ctor
    ~Date(); // dtor

    const int getDay() const;
    void setDay(int day);

    const int getMonth() const;
    void setMonth(int month);

    const int getYear() const;
    void setYear(int year);
};

#endif