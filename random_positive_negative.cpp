#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
srand(time(NULL));

int randomNumbers[10];
int number;
int numOfPositive=0;
int numOfNegative=0;

for (int i = 1; i <= 10; i++ ) {
    number = -100 + rand()%251;
    randomNumbers[i] = number;
}

cout<<"\n List of all random 10 numbers are : \n";

    for ( int i = 1; i <= 10; i++){
        cout<<"\n"<<randomNumbers[i];
    }

cout<<"\n List Of all positive numbers";

    for ( int i = 1; i <= 10; i++) {
        if (randomNumbers[i] > 0){
            cout<<"\n"<<randomNumbers[i];
            ++numOfPositive;
        }}

cout<<"\n List Of all negative numbers";

    for ( int i = 1; i <= 10; i++){
        if (randomNumbers[i] < 0){
            cout<<"\n"<<randomNumbers[i];
            ++numOfNegative;
        }
    }
return 0;
}