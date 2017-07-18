#include <cmath>
#include <cstdio>
#include<string>
#include <vector>
#include <iostream>
#include<stack>
#include <algorithm>
using namespace std;
typedef long long int ll;


int main() {
    int N;
    cin>>N;
    stack<string>stk;
    string st;
    while(N--){
        int n; cin>>n;
        if(n==1){
            string str;
            cin>>str;
            stk.push(st); 
            st+=str;
        }
        else if(n==2){
            int k;cin>>k;
             stk.push(st);
            st.erase(st.size()-k);
        }
        else if(n==3){
            int k;cin>>k;
            cout<<st[k-1]<<endl; 
        }
        else{
            st = stk.top();  
            stk.pop();
        }
    }
    
}