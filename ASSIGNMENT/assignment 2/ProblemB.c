#include <stdio.h>
int array(long long arr[],long long n,long long h)
{
        long long k, count;
        long long mid;
        long long len=0,damage=h;
        count=h;
        while(len<=damage) 
        {
            mid=(len+damage)/2;

            long long a=mid;

            for(int i=1; i<n; i++) 
            {
                if(arr[i]-arr[i-1]>mid)
                {
                    a+=mid;
                }
                else 
                {
                    a+=arr[i]-arr[i-1];
                }

            }
            if(a>=h)
            { 
                count=mid, 
                damage=mid-1; 
            }
            else {
                len=mid+1;
                }

    }
    printf("%lld\n",count);
    }

void merge(long long arr1[], long long low, long long mid, long long high)
{
    int i, j, k;
    int Ar1 = mid - low + 1;
    int Ar2 = high - mid;

    int Left[Ar1], Right[Ar2];

    for (i = 0; i < Ar1; i++){
        Left[i] = arr1[low + i];
    }
    for (j = 0; j < Ar2; j++){
        Right[j] = arr1[mid + 1 + j];
        }

    i = 0,j=0,k=low;

    while (i<Ar1 && j<Ar2) {
        if (Left[i]<=Right[j]) {
            arr1[k] = Left[i];
            i++;
        }
        else {
            arr1[k] = Right[j];
            j++;
        }
        k++;
    }

    while (i < Ar1) {
        arr1[k] = Left[i];
        i++;
        k++;
    }

    while (j < Ar2) {
        arr1[k] = Right[j];
        j++;
        k++;
    }
}

void merge_Sort(long long arr1[], long long low, long long high)
{
    if (low < high) {

        int m = low + (high - low) / 2;
        merge_Sort(arr1, low, m);
        merge_Sort(arr1, m + 1, high);

        merge(arr1, low, m, high);
    }
}



int main(){
    int test;
 long long len;
 long long h;
 int i;
 scanf("%d",&test);
 for (i=0;i<test;i++)
 {
    scanf("%lld %lld",&len,&h);
    long long arr[len];
    for(int i =0;i<len;i++){
        scanf("%lld",&arr[i]);
    }
    merge_Sort(arr,0,len-1);
    array(arr,len,h);
 }
}