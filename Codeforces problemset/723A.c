#include <stdio.h>
int abs(int t){
    if (t<0){
        return (t*(-1));
    }
}
int check(int arr[]){
    int t;
    t= abs(arr[2]-arr[1])+abs(arr[0]-arr[1]);
    return t;

}
int sort(int arr[],int size){
    for (int i =0;i<size;i++){
        for (int j=i+1;j<size;j++){
            if (arr[i]>arr[j]){
            int a=arr[i];
            arr[i]=arr[j];
            arr[j]=a;
            }
        }
    }
    return check(arr);
}
int main(){
    int arr[3];
    for (int i=0;i<3;i++){
    scanf("%d",&arr[i]);
    }
    int size=3;
    int ans=sort(arr,size);
    printf("%d",ans);

}