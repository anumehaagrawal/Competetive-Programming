#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main()
{ int T,N,i,x,y,count,m;
vector<pair<int,int>> v;
 
    cin>>T;
    while(T--){
        
        cin>>N;
        for(i=0;i<N;i++){
            cin>>x>>y;
            v.push_back(make_pair(x,y));
        }
        sort(v.begin(),v.end());
        for(i=0;i<N;i++){
            if(v[i].first==v[i].second){
            m=i;
            break;
        }
        }
        count=1;
        for(i=m;i<N-1;i++){
            
            if(v[i].second<v[i+1].second)
            
            count++;
            
        }
        v.clear();
        
        cout<<count<<endl;
    }
}