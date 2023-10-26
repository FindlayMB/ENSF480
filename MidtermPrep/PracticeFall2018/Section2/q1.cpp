#include <iostream>
using namespace std;

template <class T>
struct Node
{
    T item;
    Node<T> *next;
};

template <class T>
class List
{
private:
    struct Node<T> *headM;
    int zero = 0;
    int &rtnval = zero;

public:
    List() { headM = nullptr; }
    void insert(T &itemA);
    template <class U>
    friend ostream &operator<<(ostream &os, const List<U> &x);
    T &operator[](int index);
};

template <class T>
void List<T>::insert(T &itemA)
{
    Node<T> *tmp = headM;
    Node<T> *newNode = new Node<T>();
    newNode->item = itemA;
    newNode->next = nullptr;
    if (headM == nullptr)
    {
        headM = newNode;
        headM->item = itemA;
        headM->next = nullptr;
        return;
    }
    while (tmp->next != nullptr)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}

template <class T>
T &List<T>::operator[](int index)
{
    if (headM == nullptr || index < 0)
    {
        cout << "Something went wrong: Out of Bound Error\n";
        exit(1);
    }
    Node<T> *tmp = headM;
    int currentIndex = 0;
    while (tmp != nullptr)
    {
        if (currentIndex == index)
        {
            return tmp->item;
        }
        currentIndex++;
        tmp = tmp->next;
    }
    cout << "Something went wrong: Out of Bound Error\n";
    exit(1);
}

template <class T>
ostream &operator<<(ostream &os, const List<T> &x)
{
    struct Node<T> *tmp = x.headM;
    while (tmp->next != nullptr)
    {
        os << tmp->item << endl;
        tmp = tmp->next;
    }
    return os << tmp->item << endl;
}

int main(int argc, char const *argv[])
{
    List<int> list;
    int a = 66;
    // Create a list of nodes where:
    // n1 = 66, n2 = 99, n3 = 200, n4 = 205
    list.insert(a); // insert n1
    a = 99;
    list.insert(a); // insert n2
    a = 200;
    list.insert(a); // insert n3
    a = 205;
    list.insert(a); // insert n4

    cout << "Test retrieve:\t" << list[2] << "\tExpected: 200\n";
    list[2] = 1000;
    cout << "Test replace:\t" << list[2] << "\tExpected: 1000\n";

    cout << "\nTEST OPERATOR<<\n";
    cout << list << endl;

    // cout << "\nTEST ERROR TRAPPING\n";
    // cout << "Test index < 0\n";
    // list[-1];

    // cout << "Test index > list size\n";
    // list[10];

    // cout << "Test empty list\n";
    // List<int> list2;
    // list2[0];

    return 0;
}
