#include <iostream>
#include<string>
using namespace std;
 
int main()
{
    int l,i,j,count;
    string N;
    cin>>N;
    l=N.length();
    for(i=0;i<l;i++){
        count=0;
        for(j=i;j<l;j++){
            if(N[j]%2==0)
            count++;
        }
        cout<<count<<" ";
        
    }
}