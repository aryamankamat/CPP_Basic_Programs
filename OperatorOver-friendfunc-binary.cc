#include <iostream>
using namespace std;

class Number
{
    int a;

public:
    void accept()
    {
        cout << "Enter the value of a : ";
        cin >> a;
    }
    void display()
    {
        cout << "\n Value of a is = " << a;
    }

    friend Number operator+(Number &n1, Number &n2);
};

Number operator+(Number &n1, Number &n2)
{
    cout << "\n Overloading...";
    Number n3;
    n3.a = n1.a + n2.a;

    return n3;
}
int main()
{
    Number n1, n2, n3;
    cout << "\nValue for 1st object.\n";
    n1.accept();
    cout << "\nValue for 2nd object.\n";
    n2.accept();

    n3 = n1 + n2;
    n3.display();

    return 0;
}