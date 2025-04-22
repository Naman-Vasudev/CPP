// Find Character from ASCII Value

#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter an ASCII value: ";
    cin >> x;

    cout << "The character for ASCII value " << x << " is '" << (char)x << "'" << endl;

    return 0;
}
