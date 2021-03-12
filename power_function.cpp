#include<iostream>
#include<ostream>
#include<cmath>

using namespace std;

double power(double m,int n);
int main()
{
   int n=2;
   double raised ,m;
cout<<"\nEnter the value of m:";
cin>>m;
cout<<"\nEnter the value of n:";
cin>>n;

raised=power(m,n);
cout<<"m raised to power n is="<<raised <<endl;

}
double power(double m, int n)
{
  double x;

 x=pow(m,n);

return x;

}
