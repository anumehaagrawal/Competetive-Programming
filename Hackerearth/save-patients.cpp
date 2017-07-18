#include <iostream>
#include<stdlib.h>
using namespace std;
void bubblesort(int array1[],int array2[],int N);
void compare(int array1[],int array2[],int N2);
 
int main()
 
{
   int N, arr1[12], arr2[12],i;
   cin>>N;
   for(i=0;i<N;i++){
       cin>>arr1[i];
   }
   for(i=0;i<N;i++){
       cin>>arr2[i];
   }
   bubblesort(arr1,arr2,N);
   
}
void bubblesort(int array1[],int array2[],int N){
    
    int i,j,temp1,temp2;
    for(i=0;i<N;i++){
        for(j=0;j<N-i-1;j++){
            if(array1[j]>array1[j+1]){
                temp1=array1[j];
                array1[j]=array1[j+1];
                array1[j+1]=temp1;
            
            }
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<N-i-1;j++){
            if(array2[j]>array2[j+1]){
                temp2=array2[j];
                array2[j]=array2[j+1];
                array2[j+1]=temp2;
            
            }
        }
    }
    compare(array1,array2,N);
}
 
void compare(int array1[],int array2[],int N2){
    int k,flag;
    flag=0;
    for(k=0;k<N2;k++){
        if(array1[k]>array2[k])
        flag=1;
        else{
            flag=0;
            break;
        }
        
    }
    if(flag==1)
    cout<<"Yes";
    else
    cout<<"No";
}