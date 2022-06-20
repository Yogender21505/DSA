
#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    int arr[n];
    int count=0;
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (5-arr[i]>=k){
            count++;
        }
    }
    printf("%d",count/3);
}