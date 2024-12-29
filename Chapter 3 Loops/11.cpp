// Write a program to find sum of all the even digits in a number.
#include <iostream>
using namespace std;

int main()

 {
int n,sum;
sum=0;
cout<<"Enter any number"<<endl;
cin>>n;

while (n)
{
    int ld;
    n=n/10;
ld = (n%10);
sum= sum +ld;

}
cout <<"The sum of the even digits is "<<sum;
}
