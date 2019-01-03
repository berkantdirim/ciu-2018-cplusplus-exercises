#include<iostream>
using namespace std;

int main()
{
int c;
int p;

cout<<"Please enter the cost of the product : ";cin>>c;
cout<<"Please enter the price of the product : ";cin>>p;

if (p > c)
    cout<<"Profit";
else
    cout<<"Loss";


return 0;
}