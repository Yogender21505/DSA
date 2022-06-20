#include <stdio.h>
int main (){
    int test;
    scanf("%d",&test);
    while(test--){
        int count=0;
        int a;
        for (int i=0;i<4;i++){
            int arr[4];
            if (i==0){
                scanf("%d",&arr[i]);
                a =arr[i];
            }
            else{
                scanf("%d",&arr[i]);
                if (arr[i]>a){
                    count++;
                };
            }

            }
        
        printf("%d\n",count);
        }
    }