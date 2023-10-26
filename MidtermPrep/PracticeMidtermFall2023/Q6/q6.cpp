class A
{
protected:
    int a;

public:
    A(int a) { this->a = a; }
};

class B : public A
{
protected:
    int b;

public:
    B(int a, int b);
};

class C : virtual public B
{
protected:
    int c;

public:
    C(int a, int c);
};

class D : virtual public B
{
protected:
    int d;

public:
    D(int a, int d);
};

class E : public C, public D
{
protected:
    int e;

public:
    E(int a, int b, int c);
};

E::E(int a, int b, int c) : B(a, b), C(a, c), D(a, b)
{
    // this->e = a + b + c;
}

int main()
{
    E mye(1, 2, 3);
    return 0;
}