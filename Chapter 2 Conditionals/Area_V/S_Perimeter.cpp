#include <iostream>
using namespace std;
int main ()
{
    float l;
    cout<<"Enter the length: ";
    cin>>l;
      float b;
    cout<<"Enter the breadth: ";
    cin>>b;  
    float p= 2*(l+b);
float a= l*b;
if (p>a) cout<<"The perimeter is greater";
else if (p<a) cout<<"The area is greater";
else cout<<"The num. value is same";
}