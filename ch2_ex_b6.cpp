#include<iostream>

using namespace std;

int main()
{
int x;
int y;
int z;
int s;

cout<<"Please enter angle 1 :";cin>>x;
cout<<"Plase enter angle 2 : ";cin>>y;
cout<<"Please enter angle 3 : ";cin>>z;

s = x+y+z;

cout<<"Sum is : "<<s<<"\n";

if (s == 180)
    cout<<"Triangle valid";
else
    cout<<"Triangle is not valid";

return 0;



}