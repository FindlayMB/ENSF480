// bar.cpp
#include "bar.h"
// using std::cout, std::endl;
Bar::Bar(const char *b, const char *q) : Quux(q), bar(new char[strlen(b) + 1])
{
    using std::cout;
    if (bar == nullptr)
    {
        cout << "No memory available...";
        exit(1);
    }
    strcpy(this->bar, b);
}

Bar::Bar(const Bar &src) : Quux(src), bar(new char[strlen(src.bar) + 1])
{
    using std::cout;
    if (bar == nullptr)
    {
        cout << "No memory available...";
        exit(1);
    }
    strcpy(this->bar, src.bar);
}

Bar &Bar::operator=(const Bar &rhs)
{
    using std::cout;
    if (this == &rhs)
        return *this;
    Quux::operator=(rhs);
    delete[] bar;
    bar = new char[strlen(rhs.bar) + 1];
    if (bar == nullptr)
    {
        cout << "No memory available...";
        exit(1);
    }
    strcpy(this->bar, rhs.bar);
    return *this;
}

void Bar::display()
{
    using std::cout, std::endl;
    cout << "bar: " << bar << endl;
    Quux::display();
}