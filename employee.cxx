#include <iostream>
using namespace std;

class Employee
{
    int ecode, sal;
    char ename[10];

public:
    void accept()
    {
        cout << "Enter the Employee code : ";
        cin >> ecode;
        cout << "Enter the employee name : ";
        cin >> ename;
        cout << "Enter the Employee salary : ";
        cin >> sal;
    }
    void display()
    {
        cout << "\n The Employee code is : " << ecode;
        cout << "\n The Employee name is : " << ename;
        cout << "\n The Employee salary : " << sal;
    }
};
class Fulltime : public Employee
{
    float dw;
    int num_days;

public:
    void F_accept()
    {
        accept();
        cout << "Enter the daily wages of fullTime employee : ";
        cin >> dw;
        cout << "Enter the number of days FullTime employee worked : ";
        cin >> num_days;
    }
    void F_display()
    {
        display();
        cout << "\n The daily wages of fullTime employee :" << dw;
        cout << "\n The number of days FullTime employee worked : " << num_days;
    }
};
class Parttime : public Employee
{
    int num_wrk_hr;
    float hr_wag;

public:
    void P_accept()
    {
        accept();
        cout << "Enter the Number of working hours of PartTime employee : ";
        cin >> num_wrk_hr;
        cout << "Enter the hourly wages of partTime employee : ";
        cin >> hr_wag;
    }
    void P_display()
    {
        display();
        cout << "\n The Number of working hours of PartTime employee :" << num_wrk_hr;
        cout << "\n The hourly wages of PartTime employee : " << hr_wag;
    }
};
int main()
{
    int ch, n;

    Fulltime farr[2];
    Parttime parr[2];

    cout << "\n FullTime Employee Details....\n";
    for (int i = 0; i < n; i++)
    {
        farr[i].F_accept();
    }
    for (int i = 0; i < n; i++)
    {
        farr[i].F_display();
    }

    cout << "\n PartTime Employee Details....\n";
    for (int i = 0; i < n; i++)
    {
        parr[i].P_accept();
    }
    for (int i = 0; i < n; i++)
    {
        parr[i].P_accept();
    }

    return 0;
}
