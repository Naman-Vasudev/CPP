#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    // Input three numbers
    cout << "Enter the first number: ";
    cin >> a;
    
    cout << "Enter the second number: ";
    cin >> b;
    
    cout << "Enter the third number: ";
    cin >> c;

    // Nested If-Else to find the greatest number
    if (a > b) {
        if (a > c) 
            cout << a << " is the greatest.\n";
        else 
            cout << c << " is the greatest.\n";
    } 
    else { 
        if (b > c) 
            cout << b << " is the greatest.\n";
        else 
            cout << c << " is the greatest.\n";
    }

    return 0;
}
