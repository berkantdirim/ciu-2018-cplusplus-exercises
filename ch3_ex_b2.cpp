#include<iostream>

using namespace std;

int main()
{
int y = 0;
int x = 0;
int avr;

for (int i = 1; i <=10; i++) {
    cout<<"Student "<<i<<" age is : ";cin>>x;cout<<"\n";
    y += x;
     }
    avr = y / x;
    cout<<"Avarage age :"<<avr;

}