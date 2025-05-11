/* Operator Hierarchy in C++
BODMAS rule applies but in reality, the order is:
B/O/D, M, %, A, S
Division (/), Multiplication (*), and Modulus (%) have the same precedence.
Addition (+) and Subtraction (-) have the same precedence.
Operators with the same precedence are evaluated left to right.
Important Notes:
Integer division (int / int) always results in an integer, even if stored in a float.

------------------------------------------------------------------------------------------------------

Modulus Operator (%) gives the remainder of division:
a % b = a, if a < b
a % a = 0
a % (-b) = a % b
-a % b = - (a % b) */

#include <iostream>
using namespace std;

int main() {
    int x = -8;
    int y = 66;

    cout << x % y;  // Output: -8 (since -8 is less than 66)
    
    return 0;
}