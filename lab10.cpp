# lab2
//question 10
#include <iostream>
using namespace std;

int main()
{
 float a,b,c,d,e,t,avg,per,mm,tmm;
cout<<"\nenter maximum marks in the subject:";
cin>>mm;
tmm=5*mm;
    cout <<"\nenter marks obtained in 1st subject =";
    cin>>a;
    cout <<"\nenter marks obtained in 2nd subject =";
    cin>>b;
    cout <<"\nenter marks obtained in 3rd subject =";
    cin>>c;
    cout <<"\nenter marks obtained in 4th subject =";
    cin>>d;
    cout <<"\nenter marks obtained in 5th subject =";
    cin>>e;
    t=a+b+c+d+e;
    cout<<"\ntotal marks obtained="<<t<<"\tout of\t "<<tmm;
    avg=t/5;
    cout<<"\naverage marks= "<<avg;
    per=(t*100)/500;
    cout<<"\npercentage= "<<per;
    return 0;
}
