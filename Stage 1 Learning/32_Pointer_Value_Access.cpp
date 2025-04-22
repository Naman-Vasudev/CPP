#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int* p = &x;  // Pointer to x

    // Printing address and values
    cout << "Address of x: " << &x << endl;
    cout << "Pointer p stores: " << p << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value at pointer p (*p): " << *p << endl; // Dereferencing pointer

    return 0;
}
