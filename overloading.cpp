// WAP to show the effect of default arguments can be alternatively achieved by overloading.
#include<iostream>
#include<math.h>
using namespace std;
float b;
float p;
float power(float m, int n=2)
{
    return pow(m,n);
}
float power(float m, float n)
{
    return pow(m,n);
}
void display (float , float);
int main()
{
    cout<< " Enter the base number: " << " " ;
    cin>>b;
    cout<< " Enter the power: " << " " ;
    cin>>p;
    display(b,p);
    return 0;
}
void display(float, float)
{
    cout<< " result with default power is " << " " <<power(b) <<endl;
    cout<< " result with power " << " " <<p << " " << " is " << " " << power(b,p) <<endl;
}