#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    friend istream &operator>>(istream &cin, Number &n1);
    friend ostream &operator<<(ostream &cout, Number &n1);
};

istream &operator>>(istream &cin, Number &n1)
{
    cout << "\n Overloading Extraction Operator...\n";
    cout << "Enter the value of a : ";
    cin >> n1.a;

    return cin;
}

ostream &operator<<(ostream &cout, Number &n1)
{
    cout << "\n Overloading Insertion operator...\n";
    cout << "The value of a is = " << n1.a;

    return cout;
}

int main()
{
    Number n1;

    cin >> n1;
    cout << n1;
    return 0;
}