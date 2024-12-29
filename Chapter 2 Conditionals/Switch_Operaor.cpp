#include <iostream>
using namespace std;
int main ()
{
    int n1;
    cin>>n1;
    char op;
    cin>>op;
    int n2;
    cin>>n2;
// if (op=='+') cout<<n1+n2;
// if (op=='-') cout<<n1-n2;
// if (op=='*') cout<<n1*n2;
// if (op=='/') cout<<n1/n2; 
// Now using Switch operator
switch (op) {
    case '+' :
    cout<<n1+n2<<endl;
    break;
     case '-' :
    cout<<n1-n2<<endl;
    break;
     case '*' :
    cout<<n1*n2<<endl;
    break ;
     case '/' :
    cout<<n1/n2<<endl;
    break;
    default:
    cout<<"Invalid operator"<<endl; 
    break;
    // in case you don't write break after each condition all the answers will be printed when a necesaaary condition is achieved.
}
}