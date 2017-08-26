# lab2
//question 11
#include <iostream>
using namespace std;

int main()
{
 float p,r,t,si;

    cout <<"\nenter principal in Rs.=";
    cin>>p;
    cout <<"\nenter rate in p.a.=";
    cin>>r;
    cout <<"\nenter time in years =";
    cin>>t;
    si=(p*r*t)/100;
    cout <<"\nsimple interest="<<si;
    return 0;
}
