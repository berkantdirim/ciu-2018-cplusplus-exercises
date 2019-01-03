#include<iostream>

using namespace std;

int main()
{
int x = 0;
int c = 0;
for (int i=1; i <=10; i++) {
    cout<<"Please enter item "<<i<<"price : ";cin>>x;cout<<"\n";
        c += x;
         }
    cout<<"Total is :"<<c;



}