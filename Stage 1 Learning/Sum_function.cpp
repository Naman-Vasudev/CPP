#include<iostream>
using namespace std;

// Function to compute sum of two integers
int sum(int a, int b) {
    cout << a + b << endl; // Output the sum of a and b
}

int main() {
    int x, y;
    cout << "Enter x: ";
    cin >> x;  // Input value for x
    cout << "Enter y: ";
    cin >> y;  // Input value for y

    sum(x, y);  // Call sum function to display the result
    return 0;
}
