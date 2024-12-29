// Modulus operator is denoted by the symbol %. a%b means the remainder when a is divided by b.
// Some important points to consider.
// a%b= a, If a is less than b. 
// a%a= 0
// a%(-b)= a%b
// -a%b= -[a%b]
#include <iostream>
using namespace std;
int main ()
{
    int x=-8;
    int y=  66;
    cout<<x%y;
}