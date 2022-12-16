#include<stdio.h>
#include "system_operations2.c"


int main()
{
    int choice;
    do
    {
        printf("Enter your choice\n");
        printf("1.Shutdown\n2.Shutdown without Warning\n3.Restart\n4.Log Off\n5.Exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            shutdown();
            break;
        case 2:
            shutdowninstant();
            break;
        case 3:
            restart();
            break;
        case 4:
            logoff();
            break;
        case 5:
            printf("Thank you for using our Services\n");;
            break;
        
        default:printf("Enter valid input\n");
            break;
        }
    } while (!(choice==5));
    return 0;
}