class A
{
public:
    int a1;

protected:
    int a2;

private:
    int a3;
};

class C : private A
{
public:
    int c1;
    void funC();

protected:
    int c2;

private:
    int c3;
};

class D : public C
{
public:
    int d1;
    void funD();

protected:
    int d2;

private:
    int d3;
};