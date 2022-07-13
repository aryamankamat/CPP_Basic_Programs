#include <iostream>
using namespace std;

void volume()
{
    /* pir2h */
    float r, h, ans;

    cout << "Enter the radius : ";
    cin >> r;
    cout << "Enter the height of the cylinder : ";
    cin >> h;

    ans = 3.14 * (r * r) * h;
    cout << "\n The volume of cylinder is : " << ans;
}
void volume(float h, float r)
{
    /* pi*r2*h/3 */

    float ans;
    ans = 3.14 * (r * r) * (h / 3);
    cout << "\n The volume of cone is = " << ans;
}
void volume(float r)
{
    /* 4/3*pi*r3 */
    float ans;
    ans = (4 / 3) * 3.14 * (r * r * r);
    cout << "\n The volume of Sphere is = " << ans;
}

int main()
{
    int ch;
    float r, h;

    while (1)
    {
        cout << "\n ******MENU******\n";
        cout << "\n 1.Volume of Cylinder";
        cout << "\n 2.Volume of Cone";
        cout << "\n 3.Volume of Sphere";

        cout << "\n Enter Your choice : ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            volume();
            break;

        case 2:
            cout << "Enter the radius : ";
            cin >> r;
            cout << "Enter the height of the cylinder : ";
            cin >> h;
            volume(h, r);
            break;

        case 3:
            cout << "Enter the radius : ";
            cin >> r;
            volume(r);
            break;
        default:
            cout << "\n Please enter a valid choice....";
            break;
        }
    }
    return 0;
}
