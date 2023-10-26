
class A
{
    int x;

public:
    A(int x) : x(x) {}
    int get_x() const { return x; }
};

class B
{
    A y;

public:
    B(int b);
    A get_A() const { return y; }
};

class C
{
    B *z;

public:
    C(B *b);
    const B *get_B() const { return z; }
};

class D
{
    C *w;

public:
    D(int d);
};

// class B constructor
B::B(int b) : y(b)
{
}

// class C constructor
C::C(B *b)
{
    z = b;
}

// class D constructor
D::D(int d)
{
    w = new C(new B(d));
}
