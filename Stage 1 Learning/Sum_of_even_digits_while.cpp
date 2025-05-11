#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        int digit = n % 10; // Extract last digit
        if (digit % 2 == 0) // Check if even
            sum += digit;
        n /= 10; // Remove last digit
    }

    cout << "Sum of even digits: " << sum << endl;
    return 0;
}
