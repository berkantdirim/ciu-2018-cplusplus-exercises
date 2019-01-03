#include<iostream>
#include<cmath>
using namespace std;
void askFor()
{

int x = 0;
int y = 0;
int totalHours;
int totalMoney;
int pay = 20;
float average;

for (int i = 1; i <= 10; i++) {
    cout<<"Please enter employee "<<i<<" salary:";cin>>x;cout<<"\n";
        y += x; }
    totalHours = x / pay;
    totalMoney = x*y*pay;
    average = totalMoney / x;
    cout<<"Total hour : "<<totalHours<<"\n";
    cout<<"avarage : "<<average;

}
int main(void)
    {
    askFor();
    }
