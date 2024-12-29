// Learn the concept of pass by reference and pass by value.
#include <iostream>
using namespace std;
void swap (int& x, int& y)
{
int temp=x;
x=y;
y=temp;


}




int main()
 {
int x= 12;
int y=45;
cout<<x<< " "<<y;
cout<<endl;
swap (x,y);   //x and y are the x,y of swap function not of int main function. This is pass by value. Pass by value contains a new variable. But we can avoid this mistake/mis-understanding by using pass by reference. 

// One method   of doing this is by writing int&

cout<<x<<" "<<y;

}
/*
The mistake in this, or specifically a mis-understanding, see when we 
*/