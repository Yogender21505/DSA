#include<stdio.h>
int recur(int arr[],int start,int end,int number){
    if (start<=end){
        int pos=start+(end-start)/2;
        if (arr[pos]==number){
            return pos;
        }
        if (arr[pos]>number){
            return recur(arr,start,pos-1,number);
        }
        if (arr[pos]<number){
            return recur(arr,pos+1,end,number);
        }
    }
    return 0;

}
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    int out= recur(arr,0,n-1,k);
    if (out == 0){
        printf("%d is not present in the array",k);
    }
    else{
        printf("%d is present in the array",k);
    }
}