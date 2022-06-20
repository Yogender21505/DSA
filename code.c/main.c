#include <stdio.h>
int main()
{
    long int x;
    int y;
    long int t,i;
    scanf("%ld",&t);
    while(t--)
    {
        scanf("%ld",&x);
        int br=0;
        y=0;
        while(br!=1){
            y++;
        if (((x^y)>0) && ((x&y)>0)){
            printf("%d",y);
            br=1;
            }
    }
    printf("\n");
}
return 0;
}
