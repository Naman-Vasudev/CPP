/*
Now we will calculate NcR and NpR using loops and function. In this code we will find NcR and in 6.cpp we will find NpR.
*/
#include <iostream>
using namespace std;
int fact (int x)
{
int f=1;
for (int i=1; i<=x;i++)
{f=f*i;
}
return f;
}
int main()
 {
int n,r;
cout<<"Enter n"<<endl;
cin>>n;
cout<<"Enter r"<<endl;
cin>>r;
cout<<fact(n)/( fact(r)* fact(n-r));


}