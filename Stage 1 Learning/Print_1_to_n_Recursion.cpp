#include <iostream>
using namespace std;

// Function to print numbers from x to n using recursion
void print(int x, int n) {
    if (x > n) return;  // Base case: Stop when x exceeds n
    cout << x << endl;   // Print the current number
    print(x + 1, n);     // Recursive call with incremented value
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    print(1, n);  // Start printing from 1 to n
    return 0;
}
