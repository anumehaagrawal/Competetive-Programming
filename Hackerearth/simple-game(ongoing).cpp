#include<iostream>
#include<vector>
using namespace std;
 
int main()
{
    long long int M,N,x,y,sum1,sum,prod,prod1,count,count2,count3,count4,i,j;
    vector<int> v1,v2;
   cin>>M>>N;
   sum=0;
   sum1=0;
   
   
   
   for(i=0;i<M;i++){
       cin>>x;
       v1.push_back(x);
   }
   for(i=0;i<N;i++){
       cin>>y;
       v2.push_back(y);
   }
   for(i=0;i<M;i++){
       count=0;
       count2=0;
       for(j=0;j<N;j++){
           if(v1.at(i)>v2.at(j))
           count++;
           if(v1.at(i)<v2.at(j))
           count2++;
       }
       prod=(count*count2);
       sum=sum+prod;
      
   }
 
 
    for(i=0;i<N;i++){
        count3=0;
        count4=0;
       for(j=0;j<M;j++){
           if(v2.at(i)>v1.at(j))
           count3++;
           if(v2.at(i)<v1.at(j))
           count4++;
           
       }
       prod1=(count3*count4);
       sum1=sum1+prod1;
   }
  
   if(sum1>sum)
   {
       cout<<"!Monk"<<' '<<sum1-sum;
   }
  else if(sum1<sum)
   {
       cout<<"Monk"<<' '<<sum-sum1;
   }
   else{
       cout<<"Tie";
   }
   
   
}