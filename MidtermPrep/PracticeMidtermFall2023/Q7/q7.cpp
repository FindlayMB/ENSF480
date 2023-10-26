#include <iostream>

template <class T>
class TwoItem
{
    T first;
    T second;

public:
    TwoItem(T first, T second);
    T larger() const;
    friend std::ostream &operator<< <T>(std::ostream &, const TwoItem<T> &);
};

template <class T>
TwoItem<T>::TwoItem(T first, T second)
{
    this->first = first;
    this->second = second;
}
template <class T>
inline T TwoItem<T>::larger() const
{
    return first > second ? first : second;
}
// Don't worry about implementation of
// overloaded operator <<
