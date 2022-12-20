#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int dice;
int checkposition();
int leastmoves();
int position = 0, newposition, above;
int choice, moves = 0;
int main()
{
    srand((unsigned int)time(NULL));

    printf("Would you like to\n1.Read the rules\n2.Play the game\n");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("The rules are simple\n1.Roll the dice\n2.Number of moves will be stated at the end\n");
    }
    if (choice == 2 || choice == 1)
    {
        printf("Welcome to Snake and Ladder game\n");
        printf("100  99  98  97  96  95  94  93  92  91     |       1=start             4=ladder to 14\n");
        printf(" 90  89  88  87  86  85  84  83  82  81     |       9=ladder to 31      17=snake to 7\n");
        printf(" 80  79  78  77  76  75  74  73  72  71     |       21=ladder to 42     46=snake to 13\n");
        printf(" 70  69  68  67  66  65  64  63  62  61     |       28=ladder to 84     62=snake to 19\n");
        printf(" 60  59  58  57  56  55  54  53  52  51     |       37=ladder to 61     54=snake to 25\n");
        printf(" 50  49  48  47  46  45  44  43  42  41     |       87=snake to 36      51=ladder to 67\n");
        printf(" 40  39  38  37  36  35  34  33  32  31     |       72=ladder to 91     64=snake to 44\n");
        printf(" 30  29  28  27  26  25  24  23  22  21     |       89=snake to 53      95=snake to 75\n");
        printf(" 20  19  18  17  16  15  14  13  12  11     |       98=snake to 79      100=END\n");
        printf(" 10  09  08  07  06  05  04  03  02  01     |       80=ladder to 99     \n");
        printf("WINNER WILL BE THE ONE WHO GETS TO 100 FIRST THAT IS WITH MINIMUM NUMBER OF MOVES...\n");

        while (position < 100)
        {
            printf("\n\nRoll?\n\n");
            dice -= getche();
            dice = (rand() % 6) + 1;
            //dice=leastmoves();      //this function is to finish the game in least no. of moves as possible
            printf("\nYou rolled a dice\n");
            printf("the number on the dice is %d\n", dice);
            position += dice;
            if (dice == 6)
            {
                printf("6 came up on your throw. You get to throw again\n");        //if the number on the dice is 6 the number of mpves is not incremented
                printf("Your current position is %d\n", position);
                continue;
            }
            printf("Your current position is %d\n", position);
            moves++;

            // check the position of the player
            position = checkposition();
        }
        printf("Congratulations! You have won!! In %d moves\n", moves);
    }
    getch();

    return 0;
}

int checkposition()
{
    switch (position)
    {
    case 4:
        newposition = 14;
        // printf("You have landed on a ladder. You are now at |%d|",newposition);
        break;
    case 9:
        newposition = 31;
        // printf("You have landed on a Ladder. You are now at |%d|",newposition);----
        break;
    case 17:
        newposition = 7;
        // printf("You have landed on a Snake. You are now at |%d|",newposition);
        break;
    case 21:
        newposition = 42;
        // printf("You have landed on a Ladder. You are now at |%d|",newposition);
        break;
    case 46:
        newposition = 13;
        // printf("You have landed on a Snake. You are now at |%d|",newposition);
        break;
    case 28:
        newposition = 84;
        // printf("You have landed on a Ladder. You are now at |%d|",newposition);----
        break;
    case 62:
        newposition = 19;
        // printf("You have landed on a Snake. You are now at |%d|",newposition);
        break;
    case 37:
        newposition = 61;
        // printf("You have landed on a Ladder. You are now at |%d|",newposition);
        break;
    case 54:
        newposition = 25;
        // printf("You have landed on a Snake. You are now at |%d|",newposition);
        break;
    case 87:
        newposition = 36;
        // printf("You have landed on a Snake. You are now at |%d|",newposition);
        break;
    case 51:
        newposition = 67;
        // printf("You have landed on a Ladder. You are now at |%d|",newposition);
        break;
    case 72:
        newposition = 91;
        // printf("You have landed on a Ladder. You are now at |%d|",newposition);
        break;
    case 64:
        newposition = 44;
        // printf("You have landed on a Snake. You are now at |%d|",newposition);
        break;
    case 89:
        newposition = 53;
        // printf("You have landed on a Snake. You are now at |%d|",newposition);
        return newposition;
    case 95:
        newposition = 75;
        // printf("You have landed on a Snake. You are now at |%d|",newposition);
        break;
    case 98:
        newposition = 79;
        // printf("You have landed on a Snake. You are now at |%d|",newposition);
        break;
    case 80:
        newposition = 99;
        // printf("You have landed on a Ladder. You are now at |%d|",newposition);
        break;
    default:
        newposition = position;
        break;
    }
    return newposition;
}
int leastmoves()
{
    if (position >= 0 && position < 24)
    {
        return 6;
    }
    else if (position == 24)
    {
        return 4;
    }
    else if (position >= 84 && position < 96)
    {
        return 6;
    }
    else if (position ==96)
    {
        return 4;
    }
}
