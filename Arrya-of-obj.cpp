#include <iostream>
using namespace std;

class Student
{

private:
    int roll;
    char name[20];

public:
    void accept()
    {
        cout << "Enter Student roll number : ";
        cin >> roll;
        cout << "Enter Student name : ";
        cin >> name;

        cout << endl;
    }

    void display()
    {
        cout << "The student roll number is : " << roll << endl;
        cout << "The student name is : " << name << endl;
    }
};

int main()
{
    int n;

    cout << "Enter the number of objects : ";
    cin >> n;

    cout << endl;

    Student sarr[n];

    for (int i = 0; i < n; i++)
    {
        sarr[i].accept();

        cout << "---------------------------\n";
    }

    for (int i = 0; i < n; i++)
    {
        sarr[i].display();
        cout << "---------------------------\n";
    }

    return 0;
}