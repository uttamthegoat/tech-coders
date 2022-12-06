//Random Password Generator
//This is a program for generating random passwords

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // srand() is used to generate random seed for the rand() function
    // so that different seed is generated every time the program runs
    // time(NULL) is used to change the seed as per the clock of the device
    // as the time keeps changing, the seed too keeps changing
    srand((unsigned int)time(NULL));

    int N, i, random;
    char number[] = "1234567890";
    char letter[] = "qwertyuioplkjhgfdsazxcvbnm";
    char LETTER[] = "QWERTYUIOPLKJHGFDSAZXCVBNM";
    char special[] = "!@#$&*";
    char password[50];

    // defines the number of characters in the password
    printf("Enter the limit of characters\n");
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        random = 1 + rand() % 4; // used to randomize the order of the numbers,uppercase, lowercase and symbols. It is called during every iteration
        if (random == 1)
        {
            password[i] = letter[rand() % 26]; // picks a random character in the 26 lowercase letters and completes the loop
        }
        else if (random == 2)
        {
            password[i] = number[rand() % 10]; // picks a random character in the 10 numbers and completes the loop
        }
        else if (random == 3)
        {
            password[i] = special[rand() % 6]; // picks a random character in the 6 special characters and completes the loop
        }
        else if (random == 4)
        {
            password[i] = LETTER[rand() % 26]; // picks a random character in the 26 uppercase letters and completes the loop
        }
    }

    printf("The password is %s\n", password); // prints the password in one go
    
    //printing the password using for loop
    for(i=0; i<N;i++)
    {
        printf("%c",password[i]);
    }
    
    return 0;
}