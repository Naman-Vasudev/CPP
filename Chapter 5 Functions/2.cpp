// Parameters
#include <iostream>
using namespace std;

void sum(int c, int d)  // Inside brackets we have formal parameters which can store a value. 
{
    cout<<c+d<<endl;

}

int main()
 {
  int a,b;  
sum(9,72);
cout<<"Enter 1st :";
cin>>a;
cout<<"Enter 2nd :";
cin>>b;
sum(a,b); // Here we have the values whuch we can fill in the storage box called formal parameters.
}