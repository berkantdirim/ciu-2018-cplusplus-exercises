#include<iostream>

using namespace std;

int main()
{
int x;
int a;
int r;
int r2;

cout<<"1- Calculate the volume of cube\n2- Calculate the area of the sphere\n3- Calculate the area of the cylinder\n";
cout<<"Enter The choice (1-3)";cin>>x;

if (x == 1) {
    cout<<"--------------Volume of the cube----------------\n";
    cout<<"Please enter the area of the cube : ";cin>>a;
    cout<<"Volume of the cube is : "<<a*a*a; }
else if (x == 2) {
    cout<<"---------------Area Of The Sphere---------------\n";
    cout<<"Please enter the radius of the sphere : ";cin>>r;
    cout<<"Area of the sphere is : "<<4*3.14*r*r; }
else if (x == 3) {
    cout<<"---------------Area of The Cylinder--------------\n";
    cout<<"Please enter the radius of the cylinder : ";cin>>r2;
    cout<<"Area of the cylinder is : "<<2*3.14*r2*2*3.14*r2*r2;
}
return 0;

}