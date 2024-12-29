// Print address of the variable stored.
#include <iostream>
using namespace std;

int main()
{

    int x = 3, y = 5;
    cout << "The address of x is " << &x << " and the value is " << x << endl;
    cout << "The address of x is " << &y << " and the value is " << y << endl;
}
//The address is dynamic though..