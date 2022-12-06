// this is a number guesssing game
//here the player gets 5 chances to guess a number between 1 to 5
// the total score will be displayed at the end of the game

#include <stdio.h>
#include <stdlib.h>

int num1, num2, score,i,try;

void main()
{
    printf("This is a number guessing game.\n");
    printf("Rules\n1.You will get 5 chances\n2.For every correct guess you will get 1 point.\n");
    printf("Let's begin\n");
    printf("How many tries do you want to guess\n");
    scanf("%d",&try);

    for (i = 0; i < try; i++)
    {
        printf("This is your %d chance\n",i+1);
        printf("Guess a number between 1 to 5\n");
        scanf("%d", &num1);
        num2 = rand() % 6;
        printf("The number is \n%d\n", num2);
        if (num1 == num2)
        {
            printf("Victory! You are good!\n");
            score=score+1;
        }
        else
        {
            printf("OOPS! You lost! Better luck next time\n");
        }
    }
    printf("Your total score is %d out of %d",score,try);
}
