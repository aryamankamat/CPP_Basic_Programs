#include <iostream>
using namespace std;

class Student
{
private:
    int roll;
    char sname[10];
    float percentage;

public:
    Student()
    {
        cout << "Enter the Student roll number : ";
        cin >> roll;
        cout << "Enter the Student name : ";
        cin >> sname;
        cout << "Enter the Student percentage :";
        cin >> percentage;
    }

    void calc()
    {
        if (percentage >= 70)
        {
            cout << "\n Student has passed with Distinction. \n";
        }
        else if ((percentage >= 60) && (percentage < 70))
        {
            cout << "\n Student has passed with 1st class! \n";
        }
        else if ((percentage >= 50) && (percentage < 60))
        {
            cout << "\n Student has passed with 2nd class! \n";
        }
        else if ((percentage >= 40) && (percentage < 50))
        {
            cout << "\n Student has passed with 3rd class! \n";
        }
        else
        {
            cout << "\n The Student has Failed!!! \n";
        }
    }

    void display()
    {
        cout << "\n Student roll number is : " << roll << endl;
        cout << "Student name is : " << sname << endl;
        cout << "Student percentage is : " << percentage << endl;
    }
};

int main()
{

    Student s1;
    cout << "\n The Student Details are displayed below ... \n";
    s1.display();
    cout << "\n The Student passing class is displayed below ... \n";
    s1.calc();

    return 0;
}
