// Code to determine the number of digits in a number
#include <iostream>
using namespace std;

int main()
 {
    int n,x;
    x=0;
    cout<<"Enter a number"<<endl;
    cin>>n;

    while (n!=0)
    {
        n=n/10;
        x++ ;

    }

cout<<x;
}
