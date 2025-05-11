/*
A matrix a of dimension m x n has two coordinates 1 and 2. return the sum of the subrectangle formed by the coordinates
*/
#include<iostream>
using namespace std;
int main()
{
int m;
int n;
cout<<"Enter number of rows: ";
cin>>m;
cout<<"Enter number of columns: ";
cin>>n;
int arr[m][n];

for (int i=0;i<m;i++)
{
    for (int j=0;j<n;j++)
    {
        cin>>arr[i][j];
        
    }
    
}
cout<<"----------------------------------------------------------------------------------" <<endl;
for (int i=0;i<m;i++)
{
    for (int j=0;j<n;j++)
    {
        cout<<arr[i][j]<<" ";
        
    }
    cout<<endl;
}

int m1,n1,m2,n2;
cout<<"Enter m1: ";
cin>>m1;
cout<<"Enter n1: ";
cin>>n1;
cout<<"Enter m2: ";
cin>>m2;
cout<<"Enter n2: ";
cin>>n2;

int sum=0;
for (int i=m1;i<=m2;i++)
{
    for (int j=n1;j<=n2;j++)
    {
        sum=sum+arr[i][j];
    }
}

cout<<"The sum is "<<sum;

}