#include <stdio.h>
 
void swap(int *x,int *y){
    int temp=*x;
    *x=*y;
    *y=temp;
}

int sortarr(int arr[],int n){
    for (int i=0;i<n;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
            min=j;}
        }
        swap(&arr[i],&arr[min]);
    }int sum=0;
    return findmin(arr,n,sum);
}

int findmin(int arr[],int n,int sum){
    int min=arr[0];

    for (int i=0;i<n;i++){
        arr[i]-=min;
    }

    return newarr(arr,n,sum);
}


int newarr(int arr[],int n,int sum){
    int newr[n];
    sum=sum + arr[0];
    int j=0;
    for(int i=0;i<n;i++){
    if(arr[i]!=0){
        newr[j]=arr[i];
        j++;
        }
    }

    int size=sizeof(newr[n])/sizeof(newr[0]);

    if(size!=0){
        return(findmin(newr,size,sum));
    }
    else{
        return sum;
    }
}


int main() {
    int n;
    scanf("%d\n",&n);
    
    int arr[n];
    
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);}

    int ans=sortarr(arr,n);

    
    printf("%d",ans);
    return 0;
}