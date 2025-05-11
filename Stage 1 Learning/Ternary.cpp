#include <iostream>
using namespace std;

/*
========================================
🔹 Program: Check If a Number is Odd or Even Using Ternary Operator
========================================
💡 Explanation:
- This program takes an integer input from the user.
- It uses the **ternary operator (`? :`)** to check if the number is even or odd.
- If `num % 2 == 0`, it prints "Even", otherwise it prints "Odd".
*/

/* 🔹 Ternary Operator Syntax:
    (condition) ? expression_if_true : expression_if_false;
*/

int main() {
    int num; // Variable to store input number

    // Taking input from user
    cout << "Enter a number: ";
    cin >> num;

    // Ternary operator to check even or odd
    (num % 2 == 0) ? cout << "Even\n" : cout << "Odd\n";

    return 0;
}
