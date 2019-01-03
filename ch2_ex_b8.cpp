#include<iostream>
using namespace std;

int main()
{
int x;
string o;
int y;

cout<<"Please enter operand 1 : ";cin>>x;
cout<<"Please enter operator : ";cin>>o;
cout<<"Please enter operand 2 : ";cin>>y;

if ( o == "+")
    cout<<"Result of "<<x<<o<<y<<" is : "<<x+y;
else if ( o == "-")
    cout<<"Result of "<<x<<o<<y<<" is : "<<x-y;
else if (o == "*")
    cout<<"Result of "<<x<<o<<y<<" is : "<<x*y;
else if (o == "/")
    cout<<"Result of "<<x<<o<<y<<" is : "<<x/y;
else if (o == "%")
    cout<<"Result of "<<x<<o<<y<<" is : "<<x%y;

return 0;


}
