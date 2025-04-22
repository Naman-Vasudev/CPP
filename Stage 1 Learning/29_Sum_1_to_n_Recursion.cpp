#include <iostream>
using namespace std;

// Function to calculate sum from 1 to n using recursion
int sum(int n) {
    if (n == 1) return 1;  // Base case: Sum of 1 is 1
    return n + sum(n - 1);  // Recursive case: Sum of n + sum(n-1)
}

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Sum of numbers from 1 to " << n << " is: " << sum(n) << endl;
    return 0;
}
