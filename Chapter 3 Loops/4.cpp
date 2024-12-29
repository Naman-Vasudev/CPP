// HIGHEST FACTOR OF A NUMBER
#include <iostream>
using namespace std;
int main ()
{
//     int n;
//     cout<<"Enter number : "<<endl;
//     cin>>n;
// int f= 1;
//     for (int i=1;i<=n/2;i++){ 
//         if (n%i==0) f=i;    }
// cout<<f;

// METHOD 2 USING bREAK
int n;
cout<<"Enter number : "<<endl;
cin>>n;
for (int i=n/2;i>=1;i--) 
{if (n%i==0) cout<<i;
break;
}
}