#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main()
{
    ll sum,N,Q,i,x,y,m,p;
    sum=0;
    vector<ll> v1,v2;
    cin>>N>>Q;
    for(i=0;i<N;i++){
        cin>>x;
        v1.push_back(x);
    }
    for(i=0;i<N;i++){
        cin>>y;
        v2.push_back(y);
    }
    vector<ll>::iterator t,j,k,l;
    t=v1.begin();
    j=v1.end();
    sort(t,j);
    k=v2.begin();
    l=v2.end();
    sort(k,l);
    for(m=0;m<Q;m++){
        
        cin>>p;
        
        for(i=N-1;i>N-1-p;i--){
        sum=sum+v1.at(i);
        }
           cout<<sum<<endl;
           sum=0;
   
    }
    
 
    
}