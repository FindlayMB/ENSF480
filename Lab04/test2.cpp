#include <iostream>

class Base
{
public:
    void show();
};

class Derived : public Base
{
public:
    void show()
    {
        std::cout << "Derived class show function" << std::endl;
    }
};

int main()
{
    Base *basePtr = new Derived();
    Derived *d = new Derived();
    basePtr->show(); // Calls Base class show function, not Derived
    d->show();
    delete d;
    delete basePtr;
    return 0;
}