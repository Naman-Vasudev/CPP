# include <iostream>
using namespace std;
void change(int array[])
{
array[0]=1;
}
int main ()
{
    int arr[5]={3,7,8,9,10};

    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    change (arr);
    for (int i=0;i<5;i++)     //Arrays are by default pass by reference hence they change
    {
        cout<<arr[i]<<" ";
    }
    

}