#include<iostream>
using namespace std;



int main()
{
string str;
// cin>>str;
// cout<<str;    //Only my wil be printed cin operator igonres the thing after space so we use another command to print the full string
getline(cin,str);
cout<<str<<endl ;
str[0]='m';
cout<<str;
}