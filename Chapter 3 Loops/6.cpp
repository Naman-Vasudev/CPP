// PRINT ODD NUMEBRS FROM 1 to 100 using continue
// Continue is used to skip a round in loop
#include <iostream>
using namespace std;

int main()
 {
for (int i=1;i<=100;i++)
{
if (i%2==0)  continue;
cout<<i<<" ";
}
}
