#include <string.h>

class String
{

    char *storageM; // pointer to allocated memory on the heap

    int lengthM; // represents length of string

public:
    String(char *s) : lengthM((int)strlen(s))
    {
        storageM = new char[lengthM + 1];
        strcpy(storageM, s);

    } // ctor

    ~String()
    {
        delete[] storageM;
    } // dtor

    // void display();
};

int main(void)
{

    char a[] = "ABCD";

    char b[] = "xyz";

    String s1(a);

    String s2(b);

    s1 = s2;

    return 0;
}