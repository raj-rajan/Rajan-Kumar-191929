#include<iostream>
using namespace std;
void readmatrix(); 
void displaymatrix();
int m;
int n;
int arr[10][10];
int main() {
cout<<"Enter the order of matrix\n"; cin>>m; cout<<"*"; cin>>n; readmatrix();
displaymatrix();

return (0); }
void readmatrix() {
for(int i=1; i<=m; i++) {
for(int j=1; j<=n; j++) {
cout<<"Arr["<<i<<"]["<<j<<"] : ";
cin>>arr[i][j]; }
} }
void displaymatrix() {
cout<<"The matrix is: \n"; for(int i=1;i<=m;i++)
{
for(int j=1;j<=n;j++) {
cout<<" "<<arr[i][j];
}
cout<<endl; }
}