#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
     int number ;
     srand(time(0));
     number=rand()%100+1;
     printf("The random number is %d",number);
     do{
        printf("Guess the Number between 1 to 100:");
        scanf("%d",&guess);
        if (guess<number){
            printf("Lower number please!\n");
        }else if (guess<number){
        printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attempts\n",nguesses);
        }
        nguesses++;
     }while(guess!=number);
     return 0;
}
