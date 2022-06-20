#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int isPalindrome(char str[])
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = strlen(str) - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            
            return 0;
        }
    }
    return 1;
}

// Driver program to test above function
int main()
{
    int test;
    scanf("%d",&test);
    while(test--) 
    {
        int num,ans;
        scanf("%d",&num);
        long long p=pow(10,num-1);
        scanf("%d",&ans);
        char text[num];
        int y=0;
        int n=0;
        int k=0;
        while(y!=1){
            k=ans+n;
            sprintf(text,"%d",k);
            n++;
            y=isPalindrome(text);

            
        }
        printf("%lld\n",n+p);
        }
}
