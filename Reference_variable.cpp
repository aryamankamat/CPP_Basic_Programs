/*  Reference variables are alies or alternative name to another variable.
    Reference variables are internally constant pointers . 
    We cannot create array of reference variables.                           */

#include<iostream>
using namespace std;

int main()
{
    int a = 10;
    int &b = a; // b variable is holding the reference of variable a , so b is refered as alies of a . // 

    cout<<"\n Before inerement of variables !! \n\n"; 
    cout<<"\n The value of a is = "<<a;
    cout<<"\n The value of b is = "<<b;

    a++;
    b++;

    cout<<"\n After inerement of variables !! \n\n"; 
    cout<<"\n The value of a is = "<<a;
    cout<<"\n The value of b is = "<<b;

    return 0;
}