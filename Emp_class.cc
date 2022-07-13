#include <iostream>
using namespace std;

class Employee
{
public:
    int eno, esal;
    char ename[10], eaddress[30];

public:
    void accept()
    {
        cout << "\n Enter the Employee ID : ";
        cin >> eno;
        cout << "\n Enter the Employee name  : ";
        cin >> ename;
        cout << "\n Enter the Employee address : ";
        cin >> eaddress;
        cout << "\n Enter the Employee salary : ";
        cin >> esal;
    }

    void display()
    {
        cout << "\n The employee id is : " << eno;
        cout << "\n The employee name is : " << ename;
        cout << "\n The employee address is : " << eaddress;
        cout << "\n The employee salary is : " << esal;
    }
};

int main()
{
    int search_no, n;

    cout << "Enter the number of employees you want to register :";
    cin >> n;

    Employee earr[n];

    cout << "\n Enter the Employee details below...\n";
    for (int i = 0; i < n; i++)
    {
        earr[i].accept();
        cout << "---------------------";
    }

    cout << "\n Employee details are displayed below...\n";
    for (int i = 0; i < n; i++)
    {
        earr[i].display();
        cout << "---------------------";
    }

    cout << "\n Enter the Employee eno to display its details : ";
    cin >> search_no;

    for (int i = 0; i < n; i++)
    {
        if (earr[i].eno == search_no)
        {
            earr[i].display();
        }
    }

    return 0;
}