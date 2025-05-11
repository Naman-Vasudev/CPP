# include <iostream>
using namespace std;
int main ()
{
    int arr[5]={3,7,8,9,10};
    int arr_rev[5];

    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    for (int i=0;i<5;i++)
    {
        int j=4-i;
        arr_rev[i]=arr[j];

    }
    for (int i=0;i<5;i++)
    {
        cout<<arr_rev[i]<<" ";
    }


}   