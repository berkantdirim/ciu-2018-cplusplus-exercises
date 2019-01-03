#include<iostream>

using namespace std;

int main()
{
int in = 0;
int x = 0;
int gr = 0;

for (int i = 0; i <= 4; i++) {
    cout<<"Please enter value "<<i<<" : ";cin>>x;cout<<"\n";
        in += x;
    if (x > gr) {
        gr = x;
        }}
cout<<"Largest number : "<<gr; 
return 0;
        
}