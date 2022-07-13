#include <iostream>
using namespace std;

class student
{

private:

     int roll;
     char name[20];

public:

    void accept()
    {
         cout<<"\n Enter studnet roll number : ";
         cin>>roll;
         cout<<"\n Enter student name : ";
         cin>>name;
    }

    void display()
    {
        cout<<"\n The student roll number is = "<<roll;
        cout<<"\n The student name is = "<<name;
    }

};

int main()
{
    student s1;
    s1.accept();
    s1.display();

    return 0;
}