#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int player1;

void rock();
void paper();
void sciccors();

int main()
{
    srand((unsigned int)time(NULL));
    
    printf("This is a rock paper scissors game\n");
    here:printf("1.Rock\n2.Paper\n3.Scissors\n4.Stop\n");
    scanf("%d",&player1);

    switch (player1)
    {
    case 1:
        rock();
        break;
    case 2:
        paper();
        break;
    case 3:
        sciccors();
        break;
    case 4:
        printf("Thank you playing the game!\n");
        break;
    
    default:printf("Enter valid choice\n");
        break;
    }
    if(!(player1==4))
    {
        goto here;
    }
    
    
    
    return 0;
}

void rock()
{
    int player2=rand()%4;
    if (player2==2)
    {
        printf("Rock vs Paper\n");
        printf("You lose! Better luck next time!\n");
        printf("**************************************\n");
    }
    else if (player2==3)
    {
        printf("Rock vs Scissors\n");
        printf("You Win! Woohoo!\n");
        printf("**************************************\n");
    }
    else
    {
        printf("Rock vs Rock\n");
        printf("It's a tie!\n");
        printf("**************************************\n");
    }
    
}

void paper()
{
    int player2=rand()%4;
    if (player2==3)
    {
        printf("Paper vs Sciccors\n");
        printf("You lose! Better luck next time!\n");
        printf("**************************************\n");
    }
    else if (player2==1)
    {
        printf("Paper vs Rock\n");
        printf("You Win! Woohoo!\n");
        printf("**************************************\n");
    }
    else
    {
        printf("Paper vs Paper\n");
        printf("It's a tie!\n");
        printf("**************************************\n");
    }
}

void sciccors()
{
    int player2=rand()%4;
    if (player2==1)
    {
        printf("Sciccors vs Rock\n");
        printf("You lose! Better luck next time!\n");
        printf("**************************************\n");
    }
    else if (player2==2)
    {
        printf("Sciccors vs Paper\n");
        printf("You Win! Woohoo!\n");
        printf("**************************************\n");
    }
    else
    {
        printf("Sciccors vs Sciccors\n");
        printf("It's a tie!\n");
        printf("**************************************\n");
    }
}
