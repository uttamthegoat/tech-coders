#include<stdio.h>
#include<stdlib.h>
            
void arr(int a[10],int n);
void arrdisplay(int a[10],int n);

void main(){
    int a[10],n,i,choice;
    here:printf("Enter your Choice:\n1.Create an array\n2.Display the array\n3.Exit\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1 :
        arr(a,n);
        break;

    case 2 :
        arrdisplay(a,n);
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

void arr(int a[10],int n){
    int i;
    printf("Enter the Number of elements\n");
    scanf("%d",&n);
    printf("Enter the elelmets\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
}

void arrdisplay(int a[10],int n){
    int i;
    printf("the elements are\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d",a[i]);
    }
    
}