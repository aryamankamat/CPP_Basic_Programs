#include <iostream>
using namespace std;

// void area(int r)
// {
//     int area;
//     area = 3.14 * (r * r);
//     cout << "\n Area of circle is = " << area;
// }
void area()
{
    float area, r;

    cout << "\nEnter the radius of circle : ";
    cin >> r;

    area = 3.14 * (r * r);
    cout << "\n Area of circle is = " << area;
}

void area(float b)
{
    float area, h;
    cout << "\nEnter the heigh of triangle : ";
    cin >> h;
    area = (0.5) * (b * h);
    cout << "\n Area of Triangle is = " << area;
}
void area(float l, float b)
{
    float area;
    area = l * b;
    cout << "\n Area of Rectangle is = " << area;
}

int main()
{
    int ch;
    float l, b;

    while (1)
    {
        cout << "\n ******MENU******\n";
        cout << "\n 1.Area of circle";
        cout << "\n 2.Area of Triangle";
        cout << "\n 3.Area of Rectangle";

        cout << "\n Enter Your choice : ";
        cin >> ch;

        switch (ch)
        {
            // case 1:
            //     cout << "\nEnter the radius of circle : ";
            //     cin >> r;
            //     area(r);
            //     break;

        case 1:
            area();
            break;

        case 2:
            cout << "\nEnter the base of triangle : ";
            cin >> b;
            area(b);
            break;

        case 3:
            cout << "\nEnter the lenght of rectangle : ";
            cin >> l;
            cout << "\nEnter the base of rectangle : ";
            cin >> b;
            area(l, b);
            break;
        default:
            cout << "\n Please enter a valid choice....";
            break;
        }
    }
}