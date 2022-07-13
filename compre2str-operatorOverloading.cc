#include <iostream>
#include <string.h>
using namespace std;

class String
{
    char str[10];

public:
    void accept()
    {
        cout << "Enter a string : ";
        cin >> str;
    }

    int operator==(String s)
    {
        if (strcmp(str, s.str) == 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    String s1, s2;

    cout << "\n String for 1st object...\n";
    s1.accept();
    cout << "\n String for 2nd object...\n";
    s2.accept();

    if (s1 == s2)
    {
        cout << "\n The strings are equal...\n";
    }
    else
    {
        cout << "\n The strings are not equal...\n";
    }

    return 0;
}