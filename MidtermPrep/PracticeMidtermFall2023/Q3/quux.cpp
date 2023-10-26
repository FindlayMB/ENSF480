// quux.cpp
#include "quux.h"
// using std::cout;
Quux::Quux(const char *q) : quux(new char[strlen(q) + 1])
{
    using std::cout;
    if (quux == nullptr)
    {
        cout << "No memory available...";
        exit(1);
    }
    strcpy(this->quux, q);
}

Quux::Quux(const Quux &src) : quux(new char[strlen(src.quux) + 1])
{
    using std::cout;
    if (quux == nullptr)
    {
        cout << "No memory available...";
        exit(1);
    }
    strcpy(this->quux, src.quux);
}

Quux &Quux::operator=(const Quux &rhs)
{
    if (this == &rhs)
        return *this;
    delete[] quux;
    quux = new char[strlen(rhs.quux) + 1];
    strcpy(this->quux, rhs.quux);

    return *this;
}

void Quux::display()
{
    using std::cout, std::endl;
    cout << "quux: " << quux << endl;
}