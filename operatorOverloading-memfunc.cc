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
    void operator++()
    {
        ++a;
        ++b;
    }
    void operator++(int k)
    {
        a++;
        b++;
    }
};
int main()
{
    Number n1;
    n1.accept();
    n1.display();
    cout << "\n";

    cout << "\n The value after pre-increment...";
    ++n1;
    n1.display();

    cout << "\n";
    cout << "\n The value after post-increment...";
    n1++;
    n1.display();

    return 0;
}