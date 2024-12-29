// Nested If-Else
#include<iostream>
using namespace std;
int main (){
    int a,b,c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;
    if (a>b){
        if(a>c) cout<<a<<" is the greatest";
        else cout<<c<<" is the greatest";
            }
            else { 
    if (b>c) cout<<b<<" is the greatest";
    else cout<<c<<" is the greatest";

            }
}
