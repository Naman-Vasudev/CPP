/*
main () -> It cannot be called more than once.
return; -> Stops the subsequent function.
Always main function is read first.
Unlimited functions can be made.
return 0; is must in all int functions except int main.
*/

#include <iostream>
using namespace std;

void usa(){
    cout<<"You are in USA"<<endl;
    return;  //Next lines will not be even read. HAHAHA
    cout<<"You are in USA"<<endl;
}

int main()
 {
usa ();
cout<<"Naman";
}