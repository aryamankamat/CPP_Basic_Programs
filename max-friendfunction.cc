#include <iostream>
using namespace std;

/* Write a C++ program to find maximum of two integer numbers of two different classes using friend function.*/
class Number1
{
    int n1;

public:
    Number1()
    {
        cout << "\n Enter the  first number : ";
        cin >> n1;
    }

    friend void max();
};

class Number2
{
    int n2;

public:
    Number2()
    {
        cout << "\n Enter the  second number : ";
        cin >> n2;
    }

    friend void max();
};

void max()
{
    Number1 n1;
    Number2 n2;

    if (n1.n1 > n2.n2)
    {
        cout << "\n First number is Maximum.";
    }
    else
    {
        cout << "\n Second number is Maximum.";
    }
}

int main()
{
    max();
    return 0;
}