#include <iostream>
using namespace std;

// Function to swap two integers using pass-by-reference
void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;  // Swapping values by reference
}

int main() {
    int x = 12, y = 45;
    cout << "Before swap: " << x << " " << y << endl;

    swap(x, y);  // Call swap with reference variables

    cout << "After swap: " << x << " " << y << endl;  // Output after swap
    return 0;
}
