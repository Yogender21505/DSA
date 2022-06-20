#include <stdio.h>
int missing(int arr[],int n,int p){
    for (int i=0;i<p;i++){
        if (arr[i]==n){
            printf("the index is %d",i);
        }
    }return 0;
}
int main(){
    int arr[]={1,3,4,5,6,7,8,9,2};
    int a=2;
    int p= sizeof(arr)/sizeof(arr[0]);
    missing(arr,a,p);
}