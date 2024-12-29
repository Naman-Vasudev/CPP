#include <iostream>
using namespace std;
int main ()
{
    int x;
    cout<<"Enter the number : ";
cin>>x;
if (x%3==0 or x%5==0) cout<<"The number is divisible by 3 or 5";
else if (x%15!=0) cout<<"The number is not divisible by 15";
}