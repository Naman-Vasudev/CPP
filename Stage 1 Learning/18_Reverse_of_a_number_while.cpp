#include <iostream>
using namespace std;

int main() {
    int n, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10; // Extract last digit
        reversed = reversed * 10 + digit; // Append digit
        n /= 10; // Remove last digit
    }

    cout << "Reversed number: " << reversed << endl;
    return 0;
}
