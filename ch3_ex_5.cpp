#include<iostream>

using namespace std;

int main()
{
int x;
int ds;
int ns;
int dr;
int nr;
int y;

cout<<"1- Deluxe Suit -> 1500$/day\n2- Normal Suit -> 750$/day\n3- Deluxe Room -> 250$/Day\n4- Normal Room -> 125$/Day\n";

ds = 1500;
ns = 750;
dr = 250;
nr = 125;
cout<<"Please choose room you want to stay : ";cin>>x;
cout<<"Please enter how many days you want to reserve : ";cin>>y;

if (x == 1) {
    cout<<"Total Money is : "<<ds*y;
}
else if (x == 2) {
    cout<<"Total Money is : "<<ns*y;
}
else if (x == 3) {
    cout<<"Total Money is : "<<dr*y;
}
else if (x == 4) {
    cout<<"Total Money is : "<<nr*y;
}
return 0;
}

