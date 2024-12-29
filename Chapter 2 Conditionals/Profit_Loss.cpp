#include<iostream>
using namespace std;
int main ()
{
    int cp;
    cout<<"Enter the cost price: ";
        cin>>cp;
        int sp;
        cout<<"Enter the selling price: ";
        cin>>sp;
        if (cp<sp) cout<< "You have made an profit of "<<sp-cp;
        else if (cp==sp) cout<<"You have sold the item on no profit-no loss";
        else cout<<"You have made an loss of "<<cp-sp; 

}