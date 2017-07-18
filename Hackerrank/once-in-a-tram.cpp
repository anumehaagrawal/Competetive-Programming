#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
void summ(int x){
    int sum,sum1,n;
    n=x;
    vector<int> v;
    sum=0;
    sum1=0;
    for(int i=0;i<6;i++){
        v.push_back(n%10);
        n=n/10;
    }
    sum=v[0]+v[1]+v[2];
    sum1=v[3]+v[4]+v[5];
    if(sum==sum1)
        cout<<x<<endl;
    else{
        v.erase(v.begin(),v.end());
        summ(x++);
        
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int x;
    cin>>x;
    x++;
    int sum,sum1,n;
    n=x;
    while(1){
    vector<int> v;
    sum=0;
    sum1=0;
    for(int i=0;i<6;i++){
        v.push_back(n%10);
        n=n/10;
    }
    sum=v[0]+v[1]+v[2];
    sum1=v[3]+v[4]+v[5];
    if(sum==sum1){
        cout<<x<<endl;
        break;
    }
    else{
        v.erase(v.begin(),v.end());
        x++;
        n=x;
    }
    }  
    return 0;
}

