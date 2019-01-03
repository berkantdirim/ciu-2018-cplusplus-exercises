#include<iostream>
using namespace std;

int main()
{
int car;

cout<<"Please enter how many car you have : ";cin>>car;

if (car >= 10)
    cout<<"You are rich!";
else if (car >= 2 && car < 10)
    cout<<"You're earning well";
else if ( car >= 0)
    cout<<"Nice";

return 0;
}