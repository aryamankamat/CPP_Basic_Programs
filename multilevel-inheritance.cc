#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;
    char name[10];

public:
    void S_accept()
    {
        cout << "Enter the Student roll number : ";
        cin >> roll;
        cout << "Enter the Student name = ";
        cin >> name;
    }

    void S_display()
    {
        cout << "\n Student roll number is = " << roll;
        cout << "\n Student name is = " << name;
    }
};
class Marks : public Student
{

protected:
    float m1, m2, m3;

public:
    void M_accept()
    {
        cout << "Enter the marks of phy = ";
        cin >> m1;
        cout << "Enter the marks of chem = ";
        cin >> m2;
        cout << "Enter the marks of maths = ";
        cin >> m3;
    }
    void M_display()
    {
        cout << "\n The marks of phy is = " << m1;
        cout << "\n The marks of chem is = " << m2;
        cout << "\n The marks of maths is = " << m3;
    }
};

class Result : public Marks
{
private:
    float result;

public:
    void R_accept()
    {
        S_accept();
        M_accept();

        result = m1 + m2 + m3 / 3;
    }

    void display()
    {
        S_display();
        M_display();
        cout << "\n Result is = " << result;
    }
};

int main()
{

    Result r1;
    r1.R_accept();
    cout << "\n Student details are displayed below ....\n";
    r1.display();

    return 0;
}
