/*  We use default values where values of variables rarely change. */

#include<iostream>
using namespace std;

void sim_int(int p , int t , int r = 2)
// ALways assign defalut value from right to left .
{
     int si ;
     si = (p * r * t) / 100;
     cout<<"\n Simple interest = "<<si;
}

int main()
{
   
    int p , r , t ;

    cout<<"\n Enter the principle value : ";
    cin>>p;
    // cout<<"\n Enter the rate value = ";
    // cin>>r;
    cout<<"\n Enter the time = ";
    cin>>t;

    sim_int(p,t);


    return 0;
}