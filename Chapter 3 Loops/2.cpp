// Print 1 to 100
#include <iostream>
using namespace std;
int main ()
{

// // for (int i=1;i<;i++) {
// //         cout<<i<<endl;
// //     }


// // TO PRINT ONLY EVEN/ODD NUMEBRS
// for(int i=1;i<=100;i++)
// if (i%2!=0) cout<<i<<endl;

// PRINT TABLE OF N.................. METHOD 1
int n;
cout<<"ENTER THE NO> WHOSE TABLE IS REQD: "<<endl;
cin>>n;
// for (int i= 1;i<=10;i++) {
// cout<<n*i<<endl;

for (int i=1;i<=10*n;i++)
if(i%n==0) cout<<i<<endl;
}