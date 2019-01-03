#include<iostream>
using namespace std;

int main()
{
int x;

cout<<"Please enter the day of the month : ";cin>>x;

if (x > 0 && x < 7)
    cout<<"Week 1";
else if ( x <= 8 && x <= 14)
    cout<<"Week 2";
else if ( x >= 15 && x <= 21)
    cout<<"Week 3";
else if ( x >=22 && x <= 31)
    cout<<"Week 4";

return 0;
}