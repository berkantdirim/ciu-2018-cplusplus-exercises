#include<iostream>
using namespace std;

int main()
{
int x;
int y;
int z;

cout<<"Please enter value of angle1:";cin>>x;
cout<<"Please enter value of angle2:";cin>>y;

z = 180-(x+y);
cout<<"Angle 1 is : "<<x;
cout<<"Angle 2 is : "<<y;
cout<<"Angle 3 is : "<<z;
return 0;
}