#include<iostream>

using namespace std;

int main()
{
int i;
int faktoriyel = 1;
int f;

cout<<"Please enter the factorial number : ";cin>>i;

for (f = 0; f<i; i--)
    faktoriyel = faktoriyel*i;
    cout<<"Sum is : "<<faktoriyel;
}