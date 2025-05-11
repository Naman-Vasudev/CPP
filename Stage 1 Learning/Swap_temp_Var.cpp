#include <iostream>
using namespace std;

// Function to swap two integers using a temporary variable
int main() {
    int x = 7, y = 5;
    cout << "Before swap: " << x << " " << y << endl;

    // Swapping using a temporary variable
    int temp = x;
    x = y;
    y = temp;

    cout << "After swap: " << x << " " << y << endl;  // Output after swap
    return 0;
}
