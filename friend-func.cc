#include <iostream>
using namespace std;

class Point
{

private:
    int x, y;

public:
    void accept()
    {
        cout << "Enter value for x: ";
        cin >> x;
        cout << "Enter value for y : ";
        cin >> y;

        cout << endl;
    }

    void display()
    {
        cout << "The value of x " << x << endl;
        cout << "The value of y : " << y << endl;
    }

    friend Point add(Point p1, Point p2); // Declaring the frined function //
};

// Defining the friend functin //

Point add(Point p1, Point p2)
{
    Point p3;
    p3.x = p1.x + p2.x;
    p3.y = p1.y + p2.y;

    return p3;
}

int main()
{
    Point p1, p2;

    p1.accept();
    p1.display();

    p2.accept();
    p2.display();

    Point p3;
    p3 = add(p1, p2);
    cout << "\n The addition of p1 and p2 is displayed below ...\n";
    p3.display();

    return 0;
}