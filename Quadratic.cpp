#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double x,y,z,a,r,s;
cout<<"Enter the coefficients:";
cin>>x>>y>>z;
a=pow(y,2)-4*x*z;
if(a>=0)
{
    r=(-y+sqrt(a))/(2*x);
    s=(-y-sqrt(a))/(2*x);
    cout<<"The roots are: "<<r<<" and "<<s;
}
else
{
    cout<<"The roots are complex";
}
return 0;
}