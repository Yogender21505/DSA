#include <stdio.h>

void merge(long int arr[], int l, int m, int r,int index[])
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
 
    long int L[n1], R[n2];
    int A[n1],B[n2];
 
    for (i = 0; i < n1; i++){
        L[i] = arr[l + i];
        A[i]=index[l+i];}
    for (j = 0; j < n2; j++){
        R[j] = arr[m + 1 + j];
        B[j] = index[m+1+j];}
 
    i = 0,j=0,k=l; 
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            index[k]= A[i];
            i++;
        }
        else {
            arr[k] = R[j];
            index[k]=B[j];
            j++;
        }
        k++;
    }
    
    while (i < n1) {
        arr[k] = L[i];
        index[k]=A[i];
        i++;
        k++;
    }
 
    while (j < n2) {
        arr[k] = R[j];
        index[k]=B[j];
        j++;
        k++;
    }
}
 
void mergeSort(long int arr[], int l, int r, int index[])
{
    if (l < r) {
 
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m,index);
        mergeSort(arr, m + 1, r,index);
 
        merge(arr, l, m, r,index);
    }
}
int main() {
    int cases;
    int n;
    scanf("%d",&cases);

    for(int m=0;m<cases;m++){
        scanf("%d",&n);
    long int arr[n];
    for(int i=0;i< n;i++){
        scanf("%d",&arr[i]);
    }
  int index[n];

  for(int i=0;i<n;i++){
      index[i]=i+1;
  }

mergeSort(arr, 0, n - 1,index);

int count=0;
int y=0;
int var=0;
for(int i=0;i<n;i++){
    arr[i]-=var;
      if(arr[i]>=0){
      int x=arr[i]/index[i];
      if(arr[i]%index[i]==0){
          y=x+1;
      }
      else
      y=x+1;
      var+=(index[i]*y);
      count+=y;
      }
  }

  printf("%d",count);
  printf("\n");
    }
}