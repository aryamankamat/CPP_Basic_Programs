/* When global variable condlicts with local varibale name at that time we used scope resolution operator to resolve the ambiguity(confusion) of variables.*/

#include<iostream>
using namespace std;

int a = 5; // global variable

int main()
{
     int a = 100; // local variable

     cout<<"\n value of local a is = "<<a;
     cout<<"\n value of global a is = "<<::a;

     return 0;
}