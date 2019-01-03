#include<iostream>

using namespace std;

int main()
{
int x;
int y;
int z;

cout<<"Please enter how many hours you have worked : ";cin>>x;
cout<<"Please enter how much you're getting per hour : ";cin>>y;

z = x*y;

cout<<z<<"\n";
if (z > 3500)
    cout<<"You earn good dude.";
else if(z >= 2000 && z <= 3499)
    cout<<"good job";
else if(z >= 1000 && z <= 1999)
    cout<<"you can find another job";
else if(z < 1000)
    cout<<"find another job";

return 0;
}