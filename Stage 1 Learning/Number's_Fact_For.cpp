#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    // Method 1: Find the highest factor using a loop
    int highest_factor = 1;
    for (int i = 1; i <= n / 2; i++) {
        if (n % i == 0)
            highest_factor = i;
    }
    cout << "Highest Factor (Method 1): " << highest_factor << endl;

    // Method 2: Using break (optimized)
    for (int i = n / 2; i >= 1; i--) {
        if (n % i == 0) {
            cout << "Highest Factor (Method 2): " << i << endl;
            break; // Stop at the first factor found
        }
    }

    return 0;
}
