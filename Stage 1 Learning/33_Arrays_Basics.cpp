# include <iostream>
using namespace std;
int main ()
{
    int arr[5]; //Makes 5 storage units continuously in memory

    // Manual initialization of array arr[0]=6;
    // arr[1]=2;
    // arr[2]=8;
    // arr[3]=5;
    // arr[4]=0;
    for (int i=0;i<5;i++)
    {
        cout<<"Enter the "<<i+1<<"th element"<<endl;
        cin>>arr[i];
    }

    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }

}   