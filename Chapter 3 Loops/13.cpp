// Factorial of N
#include <iostream>
using namespace std;

int main()
 {
int n;
int product=1;
cout<<"Enter any number"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{product=product*i;}
cout<<"The factorial of the number is "<<product;
}