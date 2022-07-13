#include <iostream>
#include <string.h>
using namespace std;

class Number
{
    int a;

public:
    friend istream &operator>>(istream &cin, Number &n);
    friend ostream &operator<<(ostream &cout, Number &n);
};

istream &operator>>(istream &cin, Number &n)
{
    cout << "\n Overloading Extraction operator...\n";
    cout << "\n Enter the vlaue of a : ";
    cin >> n.a;

    return cin;
}
ostream &operator<<(ostream &cout, Number &n)
{
    cout << "\n Overloading Insertion Operator...\n";
    cout << "\n The value of a is = " << n.a;

    return cout;
}

int main()
{
    Number n1;
    cin >> n1;
    cout << n1;
}