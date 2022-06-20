#include <stdio.h>
 
int check(int arr[],int n){
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
        if (arr[i]<0){
            ;
        }
        else{
            return arr[i];
        }}
}}
void insertionSort(int arr[], int size) {
  for (int step = 1; step < size; step++) {
    int key = arr[step];
    int j = step - 1;
    while (key < arr[j] && j >= 0) {
      arr[j + 1] = arr[j];
      --j;
    }
    arr[j + 1] = key;
  }
}

int find_min(int arr[],int n)
{
    int arr1[n];
    for(int i = 0;i<n;i++){
        arr1[i]=arr[i];
    }
    insertionSort(arr, n);
    for(int i = 0;i<n;i++){
        if (check(arr,n)==arr1[i]){
            return (i+1);
        }
    }
    }
 
 
 
int add(int arr[],int n){
    int addie=0;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
        addie+=1;
        }
    }
    return addie;
}
 
int main(){
    int test_cases;
    scanf("%d",&test_cases);
    for(int i=0;i<test_cases;i++){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i< n;i++){
        scanf("%d",&arr[i]);
    }
    
    int sum=add(arr,n);
    
    int count=0;
    
    while(sum>0){
        
    count+=1;
    int min=find_min(arr,n);
    
    for(int i=0;i<n;i++){
        arr[i]-=min;
    }
    sum = add(arr,n);
    
    }
    printf("%d",count);
    printf("\n");
    }
return 0;
}