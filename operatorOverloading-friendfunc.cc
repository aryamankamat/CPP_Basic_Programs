#include <iostream>
using namespace std;

class Number
{
    int a, b;

public:
    void accept()
    {
        cout << "Enter the value of a : ";
        cin >> a;
        cout << "ENter the value of b : ";
        cin >> b;
    }
    void display()
    {
        cout << "\n The value of a is = " << a;
        cout << "\n The value of b is = " << b;
    }

    friend void operator++(Number &n1);
    friend void operator++(Number &n1, int k);
};

void operator++(Number &n1)
{
    ++n1.a;
    ++n1.b;
}

void operator++(Number &n1, int k)
{
    n1.a++;
    n1.b++;
}

int main()
{
    Number n1;
    n1.accept();
    cout << "\n The Original values are displayed below....\n";
    n1.display();
    cout << "\n";

    ++n1;
    cout << "\n Values after pre-Increment...\n";
    n1.display();

    n1++;
    cout << "\n Values after post-Increment...\n";
    n1.display();

    return 0;
}