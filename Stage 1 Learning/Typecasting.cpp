/*
Typecasting in C++
Typecasting allows conversion between different data types.
*/
#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an integer: ";
    cin >> x;

    float y = (float)x;  // Typecasting int to float
    cout << "Result of division by 2: " << y / 2 << endl;

    return 0;
}