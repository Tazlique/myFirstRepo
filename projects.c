#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int num, i= 1, guess;
    srand(time(0));
    num = rand()%100+1;
    // printf("The number is %d\n", num);


    while (guess != num)
    {   
        printf("Guess a number between 1 and 100\n");
        scanf("%d", &guess);


        if(guess == num && i <= 3){
            printf("You are good at this game. You guessed it in %d times\n", i);

        }

        else if(guess == num && i>3){
            printf("Congrats, you guessed the correct number in %d times\n", i);
        }

        else if(guess > num){
            printf("Your guess is high\n");
        }

        else if(guess < num){
            printf("Your guess is low\n");
        }

        i++;
    }
    
    
return 0;
}