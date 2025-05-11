#include<iostream>
using namespace std;

// Function to demonstrate local variables
void func() {
    int age = 18;  // Local variable to the function
    cout << "Age inside function: " << age << endl;
}

int main() {
    cout << "Trying to access age outside function: ";
    // Cannot access 'age' here since it's local to func()
    func();  // Call func() to display the local variable
    return 0;
}
