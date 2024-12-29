// SWAP
// M-1 (Temporary Variable)
#include <iostream>
using namespace std;

// int main()
// {
//     int x = 7;
//     int y = 5;
//     cout << x << " " << y << endl;
//     int temp;
//     temp = x;
//     x = y;
//     y = temp;
//     cout << x << " " << y << endl;
// }

// M-2
int main()
{
    int x, y;
    x = 7, y = 5;
    cout << x << " " << y << endl;
    x = x + y;
    y = x - y;
    x = x - y;
    cout << x << " " << y << endl;
}