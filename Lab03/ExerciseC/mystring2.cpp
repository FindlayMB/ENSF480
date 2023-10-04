/*
 * File Name: mystring2.cpp
 * Assignment: Lab 3 Exercise C
 * Lab Section: B02
 * Completed by: Findlay Brown, Nimna Wijedasa
 * Submission Date: Oct 2, 2023
 */

#include "mystring2.h"
#include <string.h>
#include <assert.h>
#include <iostream>
using namespace std;

Mystring::Mystring()
{
  charsM = new char[1];

  // make sure memory is allocated.
  memory_check(charsM);
  charsM[0] = '\0';
  lengthM = 0;
}

Mystring::Mystring(const char *s)
    : lengthM(strlen(s))
{
  charsM = new char[lengthM + 1];

  // make sure memory is allocated.
  memory_check(charsM);

  strcpy(charsM, s);
}

Mystring::Mystring(int n)
    : lengthM(0), charsM(new char[n])
{
  // make sure memory is allocated.
  memory_check(charsM);
  charsM[0] = '\0';
}

Mystring::Mystring(const Mystring &source) : lengthM(source.lengthM), charsM(new char[source.lengthM + 1])
{
  memory_check(charsM);
  strcpy(charsM, source.charsM);
}

Mystring::~Mystring()
{
  delete[] charsM;
}

int Mystring::length() const
{
  return this->lengthM;
}

char Mystring::get_char(int pos) const
{
  if (pos < 0 && pos >= length())
  {
    cerr << "\nERROR: get_char: the position is out of boundary.";
  }

  return this->charsM[pos];
}

const char *Mystring::c_str() const
{
  return this->charsM;
}

void Mystring::set_char(int pos, char c)
{
  if (pos < 0 && pos >= length())
  {
    cerr << "\nset_char: the position is out of boundary."
         << " Nothing was changed.";
    return;
  }

  if (c != '\0')
  {
    cerr << "\nset_char: char c is empty."
         << " Nothing was changed.";
    return;
  }

  this->charsM[pos] = c;
}

Mystring &Mystring::operator=(const Mystring &rhs)
{
  if (this == &rhs)
    return *this;
  delete[] this->charsM;
  this->lengthM = (int)strlen(rhs.charsM);
  this->charsM = new char[lengthM + 1];
  memory_check(this->charsM);
  strcpy(this->charsM, rhs.charsM);

  return *this;
}

Mystring Mystring::operator+(const Mystring &rhs)
{
  Mystring temp = new char[this->lengthM + rhs.lengthM + 1];
  temp.lengthM = this->lengthM + rhs.lengthM;
  strcpy(temp.charsM, this->charsM);
  strcat(temp.charsM, rhs.charsM);
  return temp;
}

Mystring &Mystring::operator+=(const Mystring &rhs)
{
  this->lengthM += rhs.length();
  char *temp = new char[this->lengthM + 1];
  assert(temp != nullptr);
  strcpy(temp, charsM);
  strcat(temp, rhs.charsM);
  delete[] charsM;
  charsM = temp;
  return *this;
}

bool Mystring::operator==(const Mystring &rhs) const
{
  return strcmp(this->charsM, rhs.charsM) == 0;
}

bool Mystring::operator!=(const Mystring &rhs) const
{
  return strcmp(this->charsM, rhs.charsM) != 0;
}

bool Mystring::operator>=(const Mystring &rhs) const
{
  return strcmp(this->charsM, rhs.charsM) >= 0;
}

bool Mystring::operator<=(const Mystring &rhs) const
{
  return strcmp(this->charsM, rhs.charsM) <= 0;
}

bool Mystring::operator>(const Mystring &rhs) const
{
  return strcmp(this->charsM, rhs.charsM) > 0;
}

bool Mystring::operator<(const Mystring &rhs) const
{
  return strcmp(this->charsM, rhs.charsM) < 0;
}

ostream &operator<<(ostream &os, Mystring &s)
{
  return os << s.charsM;
}

ostream &operator<<(ostream &os, const Mystring &s)
{
  return os << s.charsM;
}

istream &operator>>(istream &is, Mystring &s)
{
  return is >> s.charsM;
}

char &Mystring::operator[](int index)
{
  return charsM[index];
}

char &Mystring::operator[](int index) const
{
  return charsM[index];
}

Mystring &Mystring::append(const Mystring &other)
{
  char *tmp = new char[lengthM + other.lengthM + 1];
  memory_check(tmp);
  lengthM += other.lengthM;
  strcpy(tmp, charsM);
  strcat(tmp, other.charsM);
  delete[] charsM;
  charsM = tmp;

  return *this;
}

void Mystring::set_str(char *s)
{
  delete[] charsM;
  lengthM = (int)strlen(s);
  charsM = new char[lengthM + 1];
  memory_check(charsM);

  strcpy(charsM, s);
}

int Mystring::isNotEqual(const Mystring &s) const
{
  return (strcmp(charsM, s.charsM) != 0);
}

int Mystring::isEqual(const Mystring &s) const
{
  return (strcmp(charsM, s.charsM) == 0);
}

int Mystring::isGreaterThan(const Mystring &s) const
{
  return (strcmp(charsM, s.charsM) > 0);
}

int Mystring::isGreaterOrEqual(const Mystring &s) const
{
  return (strcmp(charsM, s.charsM) >= 0);
}

int Mystring::isLessThan(const Mystring &s) const
{
  return (strcmp(charsM, s.charsM) < 0);
}

int Mystring::isLessOrEqual(const Mystring &s) const
{
  return (strcmp(charsM, s.charsM) <= 0);
}

void Mystring::memory_check(char *s)
{
  if (s == 0)
  {
    cerr << "Memory not available.";
    exit(1);
  }
}
