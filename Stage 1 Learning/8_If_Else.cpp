#include <iostream>
using namespace std;

int main() {
    int num;

    // Input a number
    cout << "Enter a positive integer: ";
    cin >> num;

    // Check if even or odd using modulus operator
    if (num % 2 == 0) {
        cout << "The number is Even.\n";
    } 
    else {
        cout << "The number is Odd.\n";
    }

    return 0;
}
