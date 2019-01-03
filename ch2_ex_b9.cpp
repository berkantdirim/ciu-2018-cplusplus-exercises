#include<iostream>

using namespace std;

int main()
{
int a;

cout<<"Your age :";cin>>a;

if ( a < 50)
    cout<<"You are young";
else if (a >= 50 && a <= 75)
    cout<<"dont worry you're not that old";
else if (a > 75)
    cout<<"you're really old dude";

return 0;
}