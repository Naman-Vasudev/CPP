#include <iostream>
using namespace std;

int main() {
    int x = 4;

    // Different ways to increment a variable by 1:
    // x = x + 1;
    // x += 1;
    // Third way:
    cout << ++x;  // Pre-increment: x is incremented first, then printed.

    // Important Notes:
    // cout << x++ << endl;  -> Prints x first, then increments x (Post-increment)
    // cout << ++x << endl;  -> Increments x first, then prints it (Pre-increment)
    // Similar behavior applies to --x (pre-decrement) and x-- (post-decrement).

    return 0;
}