#include <stdio.h>
int main (){
    int test;
    scanf("%d",&test);
    while(test--) 
    {
        long long a,b;
        long long i,j;
        scanf("%lld %lld",&a,&b);
        long long sum=0;
        i=1,j=1;
        
        while (i<=a && j<=b){
            if(j<b){
                sum=sum+ (((i-1)*b)+j);
                j++;}
            else{
                sum=sum+ (((i-1)*b)+j);
                i++;
            }
        }
        printf("%lld\n",sum);
    }
}