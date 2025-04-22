#include <iostream>
using namespace std;

int main() {
    int n, product = 1;
    cout << "Enter a number: ";
    cin >> n;

    while (n != 0) {
        product *= (n % 10); // Multiply last digit
        n /= 10;             // Remove last digit
    }

    cout << "Product of digits: " << product << endl;
    return 0;
}
