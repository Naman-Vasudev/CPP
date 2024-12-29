// Check if a number is composite or not 
// #include <iostream>
// using namespace std;
// int main ()
// {
// int n;
// cout<<"Enter any number"<<endl;
// cin>>n;
// for (int i=2;i<=n/2;i++)
// {if (n%i==0) {cout<<"The number is composite";
// break;
// }
// }
// }

// PRINT PRIME OR COPRIME
#include <iostream>
using namespace std;

int main()
 {
int n;
cout<<"ENTER n"<<endl;
cin>>n;
bool flag = true; //Assume true means prime
for (int i=2;i<=n/2;i++)
{if (n%i==0)
{
    flag= false;
    break;
}

}
if (n==1 or n==0 or n<0) cout<<"neither prime nor composite";
else if (flag==true) cout<<"The number is prime";
else cout<<"Composite";
}
