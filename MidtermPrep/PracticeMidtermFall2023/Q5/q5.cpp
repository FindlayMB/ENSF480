// Overloaded opperators needed
// [index], >>, <<
#include <iostream>

// using std::istream, std::ostream;
class Text
{
    char *storageM;
    int lengthM;

public:
    Text(int n);
    /* REQUIES: n > 1;
     * PROMISES: allocates an array
     * of n characters on the heap and
     * sets '\0' to all of them.
     */
    Text(char *s);
    // Add function prototypes here
    char &operator[](int index);

    friend std::istream &operator>>(std::istream &is, Text &text);
};

std::istream &operator>>(std::istream &is, Text &text)
{
    is >> text.storageM;
    return is;
}

char &Text::operator[](int index)
{
    using std::cout;
    if (index < 0 || index > this->lengthM)
    {
        cout << "Index out of bounds!";
        exit(1);
    }
    return this->storageM[index];
}

int main()
{
    using std::cin, std::cout, std::endl;
    Text q = 20;
    q[1] = 'M';
    cout << "please enter word less than 20 \
            character : ";
    cin >>
        q;
    cout << q[0] << endl;
    return 0;
}