// Print AP 4,7,10,13,............ upto n terms
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    // METHOD 1
//     for (int i=1;i<=n;i++)
// cout<<4+(i-1)*3<<" , ";
// METHOD 2
for (int i=4;i<=3*n+1;i+=3)
{cout<<i<<" ";}
}