#include <stdio.h>
int func(int arr[],int k,int d,int t){
    if(d){
        if (arr[k-1]>arr[t-k]){
            return arr[k-1];
        }else{
            return arr[t-k];
    }
    }else{
        if (arr[k-1]<arr[t-k]){
            return arr[k-1];
        }else{
            return arr[t-k];
    }
    }
}
int sort (int arr[],int n){
    for (int i=0; i<n;i++){
        for (int j=i+1;j<n;j++){
            if (arr[i]>arr[j]){
            int a= arr[i];
            arr[i]=arr[j];
            arr[j]=a;
            }
        }
    }
    return *arr;
}
int main(){
    int t,k,d;
    scanf("%d %d %d",&t,&k,&d);
    int arr[t];
    for (int i =0; i <t;i++){
        scanf("%d",&arr[i]);
    }
    sort(arr,t);
    printf("%d",func(arr,k,d,t));
}
