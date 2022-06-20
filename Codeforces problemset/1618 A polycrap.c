#include <stdio.h>
int main(){
    int n,arr[7];
    scanf("%d",&n);
    for (int i = 0 ; i<n;i++){
            for (int i = 0 ; i<7;i++){
                scanf("%d",arr[i]);
            }
            for (int i = 7 ; i>=int (n/2);i--){
                printf("%d",i);
            }
            
        }
    return 0;
}