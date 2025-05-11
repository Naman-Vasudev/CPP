#include<iostream>
using namespace std;

// Global variable declaration
int global = 5;

// Function to display the global variable
void display() {
    cout << "Global variable: " << global << endl;
}

int main() {
    display();  // Print the global variable

    // Modify the global variable
    global = 10;
    display();  // Print the updated global variable
    return 0;
}
