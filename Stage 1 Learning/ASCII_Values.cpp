/*ASCII Values in C++
Lowercase Letters: 'a' = 97, 'b' = 98, ..., 'z' = 122
Uppercase Letters: 'A' = 65, 'B' = 66, ..., 'Z' = 90
Digits: '0' = 48, '1' = 49, ..., '9' = 57
Special Characters & Space also have ASCII values.
*/

#include <iostream>
using namespace std;

int main() {
    char x;
    cout << "Enter a character: ";
    cin >> x;
    cout << "You entered: " << x << endl;

    return 0;
}