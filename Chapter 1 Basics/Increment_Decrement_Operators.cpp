#include <iostream>
using namespace std;
int main ()
{
    int x=4;
    // Now if we have to increase the value of x by 1. there are some of ways of doing it. Out 
    // two we have already learnt.
    // x=x+1;
    // x+=1;
    // Third way will be-
    cout<<++x;
    // A very important note. refer to the video of CW time stamp around 53:40.
// cout<<x++<<endl will mean print already x first and use  new x+1. Afterwords,
//This is called Post increment.
//++x would mean increment x first and then you can print it. 
//This is called Pre incremenent.
// Same way we have --x, and x--. They are pre decrement and post decrement.

}