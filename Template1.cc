#include <iostream>
using namespace std;
template <class T, class P>
// CLass Templates
class Point
{
    T x;
    P y;

public:
    void accept()
    {
        cout << "\n ENter the value of x = ";
        cin >> x;
        cout << "\n Enter the value of y = ";
        cin >> y;
    }
    void display()
    {
        cout << "\n The value of x is = " << x;
        cout << "\n The vlaue of y is = " << y;
    }
};

int main()
{
    Point<int, float> p;

    p.accept();
    p.display();

    return 0;
}