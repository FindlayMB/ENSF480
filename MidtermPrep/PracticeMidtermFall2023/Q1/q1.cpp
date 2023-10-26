#include <iostream>
using namespace std;
class Vector
{
public:
    Vector(int n = 10);
    ~Vector();
    Vector(const Vector &source);
    Vector &operator=(const Vector &rhs);

private:
    int lengthM; // number of elements in storeM excluding
    int *storeM; // a pointer to the beginning of an array
    // of integer, allocated dynamically.
};
Vector::Vector(int n) : storeM(new int[n]), lengthM(n)
{
    cout << "\n ctor is called. ";
}
Vector::Vector(const Vector &source) : lengthM(source.lengthM), storeM(new int[source.lengthM + 1])
{
    for (int i = 0; i < lengthM; i++)
        storeM[i] = source.storeM[i];
    cout << "\n copy ctor is called. ";
}
Vector::~Vector()
{
    delete[] storeM;
    cout << "\n dtor is called. ";
}
Vector &Vector::operator=(const Vector &rhs)
{
    if (this == &rhs)
        return *this;
    delete[] storeM;
    lengthM = rhs.lengthM;
    storeM = new int[lengthM];
    for (int i = 0; i < lengthM; i++)
        storeM[i] = rhs.storeM[i];
    cout << "\n operator =. ";
    return *this;
}
void fun(Vector &a, const Vector b)
{
    Vector *z = new Vector(2);
    a = b;
    delete z;
}
int main(void)
{
    Vector x[2];
    fun(x[0], x[1]);
    return 0;
}
