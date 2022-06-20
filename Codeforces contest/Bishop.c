#include <stdio.h>
int main (){
    int test;
    scanf("%d",&test);
    while(test--){
        char arr[9][8];
        for (int i=0;i<9;i++){
            for (int j=0;j<8;j++){
                scanf("%c",&arr[i][j]);
            }
        }
        for (int i=0;i<9;i++){
            for (int j=0;j<8;j++){
                printf("%c",arr[i][j]);
            }
            printf("\n");
        }
    }
}