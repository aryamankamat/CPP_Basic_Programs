#include <iostream>
using namespace std;

void area(float PI, int r)
{
    float area = PI * r * r;
    cout << "\n The area of circle is = " << area << endl;
}

void area(float b, float h)
{
    float area = (1 / 2) * b * h;
    cout << "\n The area of trinagle is = " << area << endl;
}

void area(int l, float b)
{
    float area = l * b;
    cout << "\n The area of rectangle is = " << area << endl;
}

int main()
{
    // area of triangle : 1/2 * b * h.
    // area of cricele : pi * r * r.
    // area of rectangle : l * b.

    float b, h;
    const float PI = 3.14;
    int ch, r, l;

    while (1)
    {
        cout << "\n 1 . Calculate Area of Circle." << endl;
        cout << "2. Calculate Area of Triangle." << endl;
        cout << "3. Calculate Area of Rectangle." << endl;
        cout << "4. exit!" << endl;
        cout << "\n Please Enter your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the value of radius of a circle : ";
            cin >> r;
            area(PI, r);
            break;

        case 2:
            cout << "Enter the value of Base :";
            cin >> b;
            cout << "Enter the value of Height : ";
            cin >> h;
            area(b, h);
            break;

        case 3:
            cout << "Enter the value of lenght : ";
            cin >> l;
            cout << "Enter the value of Base :";
            cin >> b;
            area(l, b);
            break;

        case 4:
            exit(0);
            break;
        default:
            cout << "\n Please Enter a valid choice!!!\n";
            break;
        }
    }

    return 0;
}