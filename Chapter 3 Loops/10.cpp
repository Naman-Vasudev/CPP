// Code to find prodcut of all the digits in a number
#include <iostream>
using namespace std;

int main()
 {
int n;
int product;
product=1;
cout<<"Enter any number"<<endl;
cin>>n;
while (n!=0)
{
int ld;
ld= (n%10);
n=n/10;
product=product*ld;


}
cout<<"The product of the digits in a number is "<<product;
}
