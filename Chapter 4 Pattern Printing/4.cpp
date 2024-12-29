/* Printing a number square like 1111
                                 2222
                                 3333
                                 4444 if n=4 and so on
*/
#include <iostream>
using namespace std;

int main()
 {
int n;
cout<<"Enter n: "<<endl;
cin>>n;
for(int i=1; i<=n;i++)
{for(int j=1;j<=n;j++)
cout<<i;
cout<<endl;
}
 }