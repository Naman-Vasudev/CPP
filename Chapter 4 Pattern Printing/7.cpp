/*
Printing number triangle like
1
12
123
1234
12345*/
#include <iostream>
using namespace std;

int main()
 {
int n;
cout<<"Enter n :"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{for (int j=1;j<=i;j++)
cout<<i;
cout<<endl;}


}