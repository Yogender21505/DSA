#include <stdio.h>
int greater(int arr[],int size,int k){
    for (int i=0;i<size;i++){
        if (arr[i]>k){
            return 1;
        }
    }
    return 0;
}
int ans(int arr[],int size,int k){
    int flags=0;
    int flag1=0;
    int flag2=0;
    for (int i =0;i<size;i++){
        for (int j=i+1;j<size;j++){
            int sum= arr[i]+arr[j];
            if (greater(arr,size,k)){
                if (sum<=k){
                    return 1;
                }
                flag1=1;
            }
            else if(arr[j]<=k){
                flag2=1;
            }
            }
        }
        if (flag2){
            return 1;}
        else if (flag1){
            return 0;
        }
        return 0;
    }
int main(){
    int n,len,k ;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
    scanf("%d %d",&len,&k);
    int arr[len];
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    int answer=ans(arr,len,k);
    if (answer){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
    }
}