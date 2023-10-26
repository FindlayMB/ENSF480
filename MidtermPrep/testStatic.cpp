#include <iostream>
using namespace std;

class A
{
private:
    int x;
    static int y;

public:
    A()
    {
        x = 0;
        cout << "A ctor" << endl;
    }
    int getX() const { return x; }
    static int getY() { return y; }
};

class B
{
private:
    int z;
    static A a;

public:
    B(int b = 0)
    {
        this->z = b;
        cout << "B ctor" << endl;
    }

    static A getA() { return a; }
};

int A::y = 0; // Initialize static int y for class A
A B::a;       // Initialize static A a for class B
int main(int argc, char const *argv[])
{
    B b(5);
    cout << B::getA().getY() << endl;
    return 0;
}
