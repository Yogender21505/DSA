#include <stdio.h>
int main(){
 int test,len;
 int i;
 int sum=0;
 scanf("%d",&test);
 for (int j=0;j<test;j++)
 {
     scanf("%d",&len);
     int arr[len];
    for (int i=0;i<len;i++){
         scanf("%d",&arr[i]);
         sum+=arr[i];
     }
     int flag=0;
     for (int i=0;i<len;i++){
         if ((double)((sum-arr[i])/(len-1))==arr[i]){
             flag=1;
            break;
         }
         }         
         if (flag){
             printf("YES\n");
         }
         else{
             printf("NO\n");
         }
     }
 }