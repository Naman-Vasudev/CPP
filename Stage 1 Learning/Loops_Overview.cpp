#include <iostream>
using namespace std;

int main() {
    // FOR LOOP: Used when the number of iterations is known
    cout << "For Loop Example: ";
    for (int i = 1; i <= 5; i++) {
        cout << i << " "; // Output: 1 2 3 4 5
    }
    cout << endl;

    // WHILE LOOP: Used when the number of iterations is unknown
    cout << "While Loop Example: ";
    int x = 1;
    while (x <= 5) {
        cout << x << " "; // Output: 1 2 3 4 5
        x++;
    }
    cout << endl;

    // DO-WHILE LOOP: Always executes at least once
    cout << "Do-While Loop Example: ";
    int y = 10;
    do {
        cout << y << " "; // Output: 10 (executes at least once)
        y++;
    } while (y <= 9);
    cout << endl;

    // BREAK: Used to exit a loop early
    cout << "Break Example: ";
    for (int i = 1; i <= 10; i++) {
        if (i == 6) break; // Stops when i == 6
        cout << i << " "; // Output: 1 2 3 4 5
    }
    cout << endl;

    // CONTINUE: Skips the current iteration
    cout << "Continue Example: ";
    for (int i = 1; i <= 5; i++) {
        if (i == 3) continue; // Skips when i == 3
        cout << i << " "; // Output: 1 2 4 5
    }
    cout << endl;

    return 0;
}
