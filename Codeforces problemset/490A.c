#include <stdio.h>
#include <stdio.h>
int count(int arr1[],int arr2[],int n,int m){
    int i;
    int j;
    j=0;
    int count1=0;
    int count2=0;
    int count3=0;
        for (i=1;i<=n;i++){
            while (arr[i]==1){
                count1++;
                i++;
            }
            while (arr[i]==2){
                count2++;
                i++;
            }
            while (arr[i]==3){
            count3++;
            i++;
            }
        }
    }
void merge(int arr1[], int low, int mid, int high,int arr2[])
{
    int i, j, k;
    int Ar1 = mid - low + 1;
    int Ar2 = high - mid;

    int Left[Ar1], Right[Ar2];
    int ia[Ar1],ib[Ar2];

    for (i = 0; i < Ar1; i++){
        Left[i] = arr1[low + i];
        ia[i]=arr2[low+i];}
    for (j = 0; j < Ar2; j++){
        Right[j] = arr1[mid + 1 + j];
        ib[j] = arr2[mid+1+j];}

    i = 0,j=0,k=low;

    while (i<Ar1 && j<Ar2) {
        if (Left[i]<=Right[j]) {
            arr1[k] = Left[i];
            arr2[k]= ia[i];
            i++;
        }
        else {
            arr1[k] = Right[j];
            arr2[k]=ib[j];
            j++;
        }
        k++;
    }

    while (i < Ar1) {
        arr1[k] = Left[i];
        arr2[k]=ia[i];
        i++;
        k++;
    }

    while (j < Ar2) {
        arr1[k] = Right[j];
        arr2[k]=ib[j];
        j++;
        k++;
    }
}

void merge_Sort(int arr1[], int low, int high,int arr2[])
{
    if (low < high) {

        int m = low + (high - low) / 2;
        merge_Sort(arr1, low, m, arr2);
        merge_Sort(arr1, m + 1, high, arr2);

        merge(arr1, low, m, high, arr2);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    int arr1[n];
    int arr2[n];
    int count=0;
    for (int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
        arr2[i]=i+1;
    }
    merge_Sort(arr1,0,n-1,arr2);
    count(arr1,arr2,n,n);   
}