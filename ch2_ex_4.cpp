#include<iostream>
using namespace std;
int main()
{
int p;
int r;
int t;
int sum;
cout<<"Please enter Principal : ";cin>>p;
cout<<"Plase enter rate : ";cin>>r;
cout<<"Please enter time : ";cin>>t;

sum = (p*r*t) / 100;

cout<<"Simple interest is : "<<sum;
return 0;


}