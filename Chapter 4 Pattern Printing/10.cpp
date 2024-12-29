/*
1111
222
33
4....... for n=4
*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    
    for(int i = 1; i<=n; i++) {        
        for(int j = 1; j <= i; j++) {    
            cout <<j;
        }
        cout << endl;
    }
    return 0;
}