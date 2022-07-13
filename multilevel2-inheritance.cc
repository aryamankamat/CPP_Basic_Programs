#include <iostream>
using namespace std;

class Student
{
    int roll;
    char name[20];

public:
    void S_accept()
    {
        cout << "Enter Student roll number : ";
        cin >> roll;
        cout << "Enter Student name : ";
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
    int marks[5];

public:
    void M_accept()
    {
        cout << "\n Enter Student marks of 5 subjects...\n";
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter mark of " << i << "th subject : ";
            cin >> marks[i];
        }
    }

    int M_display()
    {
        int sum = 0;

        for (int i = 0; i < 5; i++)
        {
            sum = sum + marks[i];
        }

        return sum;
    }
};

class Result : public Marks
{
    float avg;
    int total;

public:
    void accept()
    {
        S_accept();
        M_accept();
    }

    void display()
    {
        S_display();
        total = M_display();
        avg = total / 5;

        cout << "\n Total of student = " << total;
        cout << "\n Percentage is = " << avg;
    }
};

int main()
{

    Result r1;
    r1.accept();
    r1.display();

    return 0;
}
