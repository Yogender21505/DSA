#include <stdio.h>
void sort(int arr[],int len)
{
    for (int i=0;i<len;i++)
    {
        for (int j=i+1;j<len;j++)
        {
            if (arr[i]>arr[j]){
                int a = arr[i];
                arr[i]=arr[j];
                arr[j]=a;
            }
        }
    }
}


int check(int arr[],int len)
{
    int f;
    if (len==1){
        return 1;
    }
    for (int i=0;i<len;i++)
    {
        if ((arr[i]-arr[i-1])>1)
        {
            return 0;

        }
        else{
            f=0;
            }
    }
    if (f==0){
        return 1;
    }

    
}



int main(){
    int n,len;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&len);
        int arr[len];
        for (int i=0;i<len;i++)
        {
            scanf("%d",&arr[i]);
        }
        sort(arr,len);
        if (check(arr,len))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}