#include<bits/stdc++.h>
using namespace std;
main()
{
int T,i,j,flag;
string s;
cin>>T;
for(i=0;i<T;i++)
{
flag=0;
cin>>s;
for(j=0;j<s.length()-1;j++){
 
if(s[j]=='C' &&( s[j+1] =='E' || s[j+1]=='S' || s[j+1]=='C'))
flag=1;
 
else if(s[j]=='E' && (s[j+1] =='E' || s[j+1]=='S'))
flag=1;
 
else if(s[j]=='S' && (s[j+1] =='S' ))
flag=1;
else{
flag=0;
break;
}}
if(flag==1)
cout<<"yes"<<endl;
else
cout<<"no"<<endl;
}
 } 