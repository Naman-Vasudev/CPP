// To store the address of a variable.
#include <iostream>
using namespace std;

int main()
{
    int x = 3;
    int* p = &x;
    cout << &x << endl
         << p;
}