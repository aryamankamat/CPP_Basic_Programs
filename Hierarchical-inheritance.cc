#include <iostream>
using namespace std;

class Staff
{
    char name[20];
    char post[20];

public:
    void accept()
    {
        cout << "Enter the name of Staff : ";
        cin >> name;
        cout << "Enter the post of Staff : ";
        cin >> post;
    }

    void display()
    {
        cout << "The staff name is : " << name << endl;
        cout << "The staff post is : " << post << endl;
    }
};

class Teacher : public Staff
{
    char sub[20];

public:
    void T_accept()
    {
        accept();
        cout << "Enter Teachers subject : ";
        cin >> sub;
    }

    void T_display()
    {
        display();
        cout << "Teachers subject is = " << sub << endl;
    }
};

class Non_Teacher : public Staff
{
    char roll[10];

public:
    void N_accept()
    {
        accept();
        cout << "Enter the job roll of Non-teacher : ";
        cin >> roll;
    }
    void N_display()
    {
        display();
        cout << "non-teacher job roll is = " << roll;
    }
};

int main()
{
    Teacher t1;
    t1.T_accept();
    cout << "\n Displaying the details of the teacher ...\n ";
    t1.T_display();
    cout << "\n";
    Non_Teacher nt1;
    nt1.N_accept();
    cout << "\n Displaying the details of the non-teacher ... \n";
    nt1.N_display();
    return 0;
}
