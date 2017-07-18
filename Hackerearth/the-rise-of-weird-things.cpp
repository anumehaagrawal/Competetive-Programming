#include <iostream>
using namespace std;
 
int main()
{
   int N ,count,k,m,i,j,a[1000],b[1000],c[1000],sum,sum1,count2,temp;
   count=0;
   count2=0;
   k=0;
   m=0;
   sum=0;
   sum1=0;
   
   cin>>N;
   for(i=0;i<N;i++){
       cin>>a[i];
       if(a[i]%2==0){
           b[k]=a[i];
           sum=sum+b[k];
            count++;
            k++;
           
       }
       if(a[i]%2!=0){
           c[m]=a[i];
            count2++;
            sum1=sum1+c[m];
            m++;
           
       }
   }
   
   for(i=1;i<count;i++){
       j=i;
       while(j>0 && b[j]<b[j-1])
       {
           temp=b[j];
           b[j]=b[j-1];
           b[j-1]=temp;
           j--;
       }
       
   }
   b[count]=sum;
 
   for(i=1;i<count2;i++){
       j=i;
       while(j>0 && c[j]<c[j-1])
       {
           temp=c[j];
           c[j]=c[j-1];
           c[j-1]=temp;
           j--;
       }
       
   }
   c[count2]=sum1;
   for(i=1;i<count2+2;i++){
       b[count+i]=c[i-1];
   }
   for(j=0;j<N+2;j++)
   cout<<b[j]<<' ';
}