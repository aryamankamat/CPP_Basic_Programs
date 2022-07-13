/* Design two base classes personnel (Name, Address, Email - id, Birthdate)
and Academic (Marks - in - tenth, marks - in - Twelth, class - obtained)
Derive a class Biodata from both these classes write a C++ program to
prepare a biodata of a student having personnel and Academic
information.
 */

#include <iostream>
using namespace std;

class personel
{
protected:
    char name[10];
    char add[20];
    char email[20];
    int bd;

public:
    void P_accept()
    {
        cout << "Enter Student name = ";
        cin >> name;
        cout << "Enter Student address = ";
        cin >> add;
        cout << "Enter Student email id = ";
        cin >> email;
        cout << "Enter Student Birthdate = ";
        cin >> bd;
    }
    void P_display()
    {
        cout << "\n Student name is = " << name;
        cout << "\n Student address = " << add;
        cout << "\n Student email is = " << email;
        cout << "\n Student Birthdate is = " << bd;
    }
};
class Academic
{
protected:
    int M_in_T, M_in_Tw;
    char rclass[10];

public:
    void A_accept()
    {
        cout << "Enter Marks in 10th = ";
        cin >> M_in_T;
        cout << "Enter Marks in 12th = ";
        cin >> M_in_Tw;
        cout << "Enter the Result Class Status = ";
        cin >> rclass;
    }
    void A_display()
    {
        cout << "\n Student 10th Marks is = " << M_in_T;
        cout << "\n Student 12th Marks is =" << M_in_Tw;
        cout << "\n Student Result Status is = " << rclass;
    }
};
class Biodata : public personel, public Academic
{
public:
    void accept()
    {
        P_accept();
        A_accept();
    }
    void display()
    {
        P_display();
        A_display();
    }
};

int main()
{

    Biodata b1;
    b1.accept();
    b1.display();

    return 0;
}