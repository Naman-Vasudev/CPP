#include <iostream>
using namespace std;

// Function to calculate factorial of a number
int fact(int x) {
    int f = 1;
    for (int i = 1; i <= x; i++) {
        f = f * i;  // Multiply to get factorial
    }
    return f;  // Return the factorial
}

// Function to calculate nCr (Combination)
int ncr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));  // Calculate nCr using the formula
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;  // Input value for n

    // Loop to print Pascal's Triangle
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ncr(i, j) << " ";  // Print nCr for each value
        }
        cout << endl;  // New line after each row
    }

    return 0;
}
