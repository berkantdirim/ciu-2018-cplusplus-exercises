#include<iostream>
#include<cmath>

using namespace std;

int main()
{
int x;
int a;
int b;
int y;

cout<<"please enter a value to a";cin>>a;
cout<<"plesae enter a value to b";cin>>b;

x = a*a + b*b*b;
y =sqrt(x);
cout<<"square root of "<<x<<": "<<y;
}