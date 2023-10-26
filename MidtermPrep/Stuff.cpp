#include <iostream>

class Stuff
{
private:
    int index;

public:
    Stuff(int index = 0);

    int operator++();
    int operator++(int);
    friend std::ostream &operator<<(std::ostream &os, const Stuff &s);
};

std::ostream &operator<<(std::ostream &os, const Stuff &s)
{
    return os << s.index << std::endl;
}

Stuff::Stuff(int index)
{
    this->index = index;
}

int Stuff::operator++()
{
    this->index++;
    return index;
}

int Stuff::operator++(int)
{
    int tmp = this->index;
    this->index++;
    return tmp;
}

int main(int argc, char const *argv[])
{
    using std::cout, std::endl;
    Stuff s;
    cout << s;
    cout << ++s << endl;
    cout << s++ << endl;
    cout << s;

    return 0;
}
