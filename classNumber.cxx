#include <iostream>
using namespace std;

class Number
{

private:
    static int cnt; // Declaring the static data member. //

public:
    void display()
    {
        cnt++;
        cout << "The object number is : " << cnt;
    }
};

int Number ::cnt; // Defining the static data member.

int main()
{

    Number n1;

    n1.display();

    cout << endl;
    cout << "-----------------------------";
    cout << endl;

    Number n2;

    n2.display();

    return 0;
}