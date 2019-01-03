#include<iostream>

using namespace std;

int main()
{
int x;

cout<<"Please enter the temprature of the day : ";cin>>x;

if (x > 30)
    cout<<"it's definitely summer";

else if (x >= 15 && x < 30)
{
    cout<<"it might be autumn or spring";    
}
else if ( x < 15 )
    cout<<"it has to be winter";

return 0;

}