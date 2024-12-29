// write code to find the sum of digits in a number.
#include <iostream>
using namespace std;

int main()
 {
    int n;
    int sum;
    sum=0;
    cout<<"Enter a number"<<endl;
    cin>>n;

    while (n!=0)
    {
int ld;
ld=n%10;
n=n/10;
sum=sum+ld;
}

cout<<sum;
}
