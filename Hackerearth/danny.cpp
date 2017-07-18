#include <iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;
 
int main()
{
  long long int i,N,j,K, x,c;
vector<int> v,v1;
//cin>>N>>K;
scanf("%I1444u %I1444u",&N,&K);
for(i=0;i<N;i++){
 //   cin>>x;
 scanf("%I1444u",&x);
    v.push_back(x);
}
for(i=0;i<N-1;i++){
    for(j=i+1;j<N;j++){
    c=abs(v.at(i)-v.at(j));
    v1.push_back(c);
    
    }
 
}
vector<int>::iterator k,l;
k=v1.begin();
l=v1.end();
sort(k,l);
//cout<<v1.at(K-1);
printf("%I1444u",v1.at(K-1));
}