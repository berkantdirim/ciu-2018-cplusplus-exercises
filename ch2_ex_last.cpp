#include<iostream>

using namespace std;

int main()
{
int x;
int y;
int a,b,c;

cout<<"**Food Menu**\n1->Pasta (6$)\n2->Hamburger (7$)\n3->Pizza (10$)";cin>>x;
a = 6;
b = 7;
c = 10;

if (x == 1) {
    cout<<"How many Pasta would you like to order? : ";cin>>y;
    cout<<"Total Pay : "<<a*y; }
else if (x == 2) {
    cout<<"How Many Hamburgers would you like to order ? :";cin>>y;
    cout<<"Total Pay : "<<b*y; }
else if (x == 3) {
    cout<<"How Many Pizzas would you like to order ? : ";cin>>y;
    cout<<"Total Pay : "<<c*y; }


return 0;

}