# include <iostream>
using namespace std;
int main ()
{
    int arr[5]={3,7,8,9,10};
    int n=sizeof(arr)/4;   //sizeof operator gives the bits stored by the variable.
    int sum=0;
    for (int i=0;i<n;i++)  
    {
        sum=sum+arr[i];
    }
    cout<<sum;
}   