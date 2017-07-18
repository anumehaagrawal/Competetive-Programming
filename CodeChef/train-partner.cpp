#include<stdio.h>
int main()
{
int N,T,p;
scanf("%d",&T);
 
for(p=0;p<T;p++)
{
scanf("%d",&N);
if(N%8==1)
printf("%dLB\n",N+3);
else if(N%8==2)
printf("%dMB\n",N+3);
else if(N%8==3)
printf("%dUB\n",N+3);
else if(N%8==4)
printf("%dLB\n",N-3);
else if(N%8==5)
printf("%dMB\n",N-3);
else if(N%8==6)
printf("%dUB\n",N-3);
else if(N%8==7)
printf("%dSU\n",N+1);
else if(N%8==0)
printf("%dSL\n",N-1);
}
} 