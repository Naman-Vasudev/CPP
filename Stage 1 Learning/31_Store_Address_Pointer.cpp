#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int* p = &x;  // Pointer stores the address of x

    cout << "Address of x: " << &x << endl;
    cout << "Pointer p stores: " << p << endl;

    return 0;
}
