#include<stdio.h>
#include<stdlib.h>

int a[10],n,i,choice;
            
void arr();
void arrdisplay();

void main(){
    
    here:printf("Enter your Choice:\n1.Create an array\n2.Display the array\n3.Exit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :
        arr();
        break;

    case 2 :
        arrdisplay();
        break;

    case 3 :
        exit(0);
    
    default:printf("Invalid Input");
        break;
    }
    if (!(choice==3))
    {
        goto here;
    }
    
    
}

void arr()
{
    printf("Enter the Number of elements\n");
    scanf("%d",&n);
    printf("Enter the elelmets\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}

void arrdisplay()
{
    printf("the elements are\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
}
