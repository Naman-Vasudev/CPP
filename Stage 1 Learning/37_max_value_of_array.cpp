#include <iostream>
using namespace std;

int main ()
{
int arr[]={1,4,9,10,23,0,3,6};
int mx=arr[0];  //Or use INT_MIN to make it list    
for (int i=0;i<sizeof(arr)/4;i++)
{
    if (arr[i]>mx)
    {
        mx=arr[i];
        
    }
    else continue;

    // mx=max(mx,arr[i]); another way

}

cout<<mx;
}