#include<iostream>
#include<cmath>

using namespace std;

int main()
{
float w;
float x;
float y;
float z;
float a;

cout<<"Please enter the value of w : ";cin>>w;
cout<<"Please enter the value of x : ";cin>>x;
cout<<"Please enter the value of y : ";cin>>y;
cout<<"Please enter the value of z : ";cin>>z;

a = sqrt(pow(w,x)+(y*2)+pow(z,z));
cout<<"Result is : "<<a;
}