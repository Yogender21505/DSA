#include <stdio.h>
int check(int arr[],int len){
    int counteven=0;
    int count;
    for (int i=0;i<len;i++){
        if (arr[i]%2==0){
            counteven++;
            }
        else{
            count++;
        }
    }
    if (count<counteven){
        return count;
    }
    else{
        return counteven;
    }
}




int main()

{
    int i,j;
    int len,n;
    scanf("%d",&n);
    for (i=0;i<n;i++){
        scanf("%d",&len);
        int arr[len];
        for (j=0;j<len;j++)
        {
        scanf("%d",&arr[j]);
        }
        printf("%d",check(arr,len));

    }
}