// We'll study FOR LOOP
// // Syntax-- for(int i =1;i<10;i++) {
// code}
// Print hello world n times.
#include <iostream>
using namespace std;
int main ()
{
    int n;
    cout<<"Enter number of times which hello world is to be printed"<<endl;
    cin>>n;
    for (int i=5;i<n;i--) {
        cout<<"Hello world"<<endl;
    }
}