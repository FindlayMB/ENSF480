#include "bar.h"
#include <iostream>

int main(int argc, char const *argv[])
{
    using std::cout, std::endl;
    Bar b1("Hello", "World");
    b1.display();

    cout << "Test Bar copy ctor\n";
    Bar b2(b1);
    b2.display();

    cout << "Test Bar assignment operator\n";
    Bar b3("John", "Doe");
    b2 = b3;
    b2.display();

    return 0;
}
