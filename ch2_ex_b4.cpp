#include<iostream>
using namespace std;

int main()
{
int s;
int b;
int d;

cout<<"Please enter of the toys you want to buy : ";cin>>b;
s = 20;
d = s*0.9;
if (b > 5)

    cout<<"Discount! : "<<b*d;
else
    cout<<"Total Price : "<<b*s;

return 0;
}