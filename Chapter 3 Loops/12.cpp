// To write reverse of a number;
// #include <iostream>
// using namespace std;

// int main()
//  {
// int n;
// cout<<"Enter any number"<<endl;
// cin>>n;
// while (n!=0)
// {
//     int ld;
//     ld=n%10;
//     n=n/10;
//     cout<<ld;
// }

// }
#include <iostream>
using namespace std;

int main()
 {
int n;
cout<<"Enter a number "<<endl;
cin>>n;

int r;
r=0;


while (n!=0)
{

int ld;
ld=n%10;
r*=10;
r+=ld;
n/=10;

}
cout<<r;
}