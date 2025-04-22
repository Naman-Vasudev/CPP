#include <iostream>
using namespace std;

// Function to demonstrate main function behavior
void usa() {
    cout << "You are in USA" << endl;
    return; // Stops the subsequent lines from being executed
    // The following line will not be executed
    cout << "You are in USA" << endl;
}

int main() {
    usa();  // Call usa() function
    cout << "Naman" << endl;  // Print Naman
    return 0;  // Return 0 from main function to indicate successful execution
}
