#include<bits/stdc++.h>
using namespace std;
int main()
{   int b;
    cin>>b;
    while(b--)
    {   int a,n,i,match=0,check=1;
        cin>>n;
        for(i=1;i<=n;i++)
        {   cin>>a;
            if(i<=(n+1)/2)  match++;
            else    match--;
            if(match!=a)    check=0;
        }
        if(!(n&1))  cout<<"no"<<endl;
        else
        {   if(check)   cout<<"yes"<<endl;
            else    cout<<"no"<<endl;
        }
    }
    return 0;
} 