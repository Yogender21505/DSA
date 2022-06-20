#include <stdio.h>

int check(int arr[],int low , int high, int x){
    int h = high -1;
    while (low <h ){
            if (arr[low]+arr[h]==x)
            {
                return 1;
            }
            if (arr[low]+arr[h]<x){
                low++;
            }
            else{
                h--;
            }
        }
    return 0;
}



void merge(int arr[],int low , int mid , int high){
    int n1= mid - low +1;
    int n2= high -mid;

    int l[n1];
    int r[n2];
    
    for (int i =0;i<n1;i++){
        l[i]=arr[low+i];
    }
    for (int j= 0;j<n2;j++){
        r[j]=arr[mid + j +1];
    }
    int i=0,j=0,k=low;
    while(i<n1 && j<n2){
        if (l[i]<=r[i]){
            arr[k]=l[i];
            i++;
            k++;
        }
        else {
            arr[k]=r[j];
            j++;
            k++;
        }
    }

    while (i<n1){
        arr[k]=l[i];
        i++;
        k++;
    }
    while (j<n2){
        arr[k]=r[j];
        j++;
        k++;
    }
}


void merge_sort(int arr[],int low , int high){
    if (low < high){

    int mid = (high+low)/2;

    merge_sort(arr,low, mid);
    merge_sort(arr,mid+1,high);

    merge(arr,low,mid,high);
    }
}


void print(int arr[],int len){
    for (int i=0;i<len;i++){
        printf("%d ",arr[i]);
}}

int main (){
    int len,x;
    scanf("%d",&len);
    scanf("%d",&x);
    int arr[len];
    for (int i =0;i<len;i++){
        scanf("%d",&arr[i]);
    }
    printf("sorted array is = \n");
    merge_sort(arr,0,len-1);
    print(arr,len);
    if (check(arr,0,len,x)){
        printf("Possible");
    }
    else{
        printf("Impossible");
    }
}
