#include <iostream>
using namespace std;

int main() {
    int x = 7, y = 5;
    cout << "Before swap: " << x << " " << y << endl;

    // Swapping using arithmetic operations
    x = x + y;  // Step 1: x becomes sum of x and y
    y = x - y;  // Step 2: y becomes the original value of x
    x = x - y;  // Step 3: x becomes the original value of y

    cout << "After swap: " << x << " " << y << endl;  // Output after swap
    return 0;
}
