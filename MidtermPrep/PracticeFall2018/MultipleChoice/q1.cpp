// Checking if friend daisy chains

// Conclusion: it does not
#include <iostream>
using namespace std;

class B;
class C;

class A
{
    int a;

public:
    A(int a = 1) { this->a = a; }
    int bar(B &b1, C &c1);
};

class B
{
    int b;
    friend class A;

public:
    B(int b = -1) { this->b = b; }
    int fun(C &c1);
};

class C
{
    int c;
    friend class B;

public:
    C(int c = 1) { this->c = c; }
    int foo();
};

int A::bar(B &b1, C &c1)
{
    cout << "a: " << a << "\t";
    cout << "b: " << b1.b << "\t";
    // cout << "c: " << c1.c << "\t";
    return (a + b1.b);
}

int B::fun(C &c1)
{
    cout << "b: " << b << "\t";
    cout << "c: " << c1.c << "\t";
    return (b + c1.c);
}

int C::foo()
{
    cout << "c: " << c << "\t";
    return c;
}
int main(int argc, char const *argv[])
{
    A a1;
    B b1;
    C c1;

    cout << a1.bar(b1, c1) << endl;
    cout << b1.fun(c1) << endl;
    cout << c1.foo() << endl;

    return 0;
}
