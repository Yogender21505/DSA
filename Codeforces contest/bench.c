#include <stdio.h>
int bench(int len,int max){
    int sum=0;
    int arr[len];
    for (int i=0;i<len;i++){
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    if (sum<=max){
        return 0;
    }
    else{
        return (sum-max);
    }

}
int main(){
    int test ;
    int n,k;
    scanf("%d",&test);
    while(test--){
        int n,k;
        scanf("%d %d",&n,&k);
        int ans=0;
        ans=bench(n,k);
        printf("%d\n",ans);
        


    }
}