#include <iostream>
#include<math.h>
using namespace std;
 
int main()
{
    int c,N,i,x;
   cin>>N;
   for(i=0;i<N;i++)
    cin>>x;
 c=(pow((1+(8*N)),0.5)-1)/2;
 cout<<c;
}