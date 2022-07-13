#include <iostream>
using namespace std;

void calc(char wrkname[10], int no_hr_wr, int p_r = 300)
{
    float sal = no_hr_wr * p_r;
    cout << "\n The Worker Name is = " << wrkname;
    cout << "\n The worker salary is = " << sal;
}
int main()
{
    char wrkname[10];
    int no_hr_wr;
    int p_r;

    cout << "Enter the Worker name = ";
    cin >> wrkname;
    cout << "Enter the number of hours worked : ";
    cin >> no_hr_wr;

    calc(wrkname, no_hr_wr);

    return 0;
}
