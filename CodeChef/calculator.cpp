#include<iostream>
#include<algorithm>
using namespace std;
 
int main()
 
{
long long int T,i,N,B,maxsum;
 
cin>>T;
while(T--){
    maxsum=0;
    cin>>N>>B;
    for(i=1;(N-(i*B))*i>0;i++)
        maxsum=max(maxsum,(N-(i*B))*i);
 
    cout<<maxsum<<endl;
}
 
} 