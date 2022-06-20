#include <stdio.h>
void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int low, int hi)
{
    if (low < hi) {
        int mid = low + (hi - low)/2;
        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, hi);
 
        merge(arr, low, mid, hi);
    }
}
 
int main (){
 
    int i,n,j,k,b=0,c=0,e=0,f=0;
    scanf("%d %d",&n,&k);
    e=k;
    int arr[100009];
    for( i=0 ; i<n ; i++)
    {
        scanf("%d",&arr[i]);
    }
    mergeSort(arr,0,n-1);
    j=n-1;
    for(i=n-1;i>=0;i--)
    {
        while(arr[j]==arr[i] && j>=0)
        {
            j--;
            c++;
        }
        while(k>=arr[i]-arr[j] && j>=0)
        {
            k -= arr[i]-arr[j];
            j--;
            c++;
        }
        if(c>=b)
        {
            b=c;
        }
        while(i>=0 && arr[i]==arr[i-1]){
            i--;
            c--;
        }
     c--;
    k+=c*(arr[i]-arr[i-1]);
 
    }
    printf("%d",b);
    return 0;
 
}