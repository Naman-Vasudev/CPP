/*Print the following pattern 12345...............
                              12345................. square
  */  #include <iostream>
using namespace std;

int main()
 {
int n;
cout<<"Enter n for the square is to be printed"<<endl;
cin>>n;
for(int i=1;i<=n;i++)
{for (int j=1;j<=n;j++)
{cout<<j ;
}
cout<<endl;
}

}