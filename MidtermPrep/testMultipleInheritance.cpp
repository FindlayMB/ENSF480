#include <iostream>
using std::cout, std::endl;
class A
{
protected:
    int a;

public:
    A() { a = 1; }
    int sum() { return a; }
};

class B : public A
{
protected:
    int b;

public:
    B() : A() { b = 2; }
    int sum() { return b; }
};

class C : public A
{
protected:
    int c;

public:
    C() : A() { c = 2; }
    int sum() { return c; }
};

class D : public C
{
protected:
    int d;

public:
    D() : C() { d = 3; }
    int sum() { return d; }
};

class F : public B, public C
{
protected:
    int f;

public:
    F() : B(), C() { f = 4; }
    int sum() { return f; }
};

int main(int argc, char const *argv[])
{
    F fobj;
    cout << fobj.sum() << endl;
    return 0;
}
