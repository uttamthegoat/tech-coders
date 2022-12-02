#include<stdio.h>
#include<stdlib.h>

int a[10],i,n,choice,ele,pos;

void insertion();
void deletion();
void arrdisplay();
            
void main(){
    printf("Enter the Number of elements\n");
    scanf("%d",&n);
    printf("Enter the elelmets\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }      

    again:printf("Enter your Choice:\n1.Insertion of an element at a position\n2.Deletion of an element at a position\n3.Display the array\n");
    scanf("%d",&choice);
      switch (choice)
    {
    case 1 :
        insertion();
        break;

    case 2 :
        deletion();
        
        break;

    case 3 :
        arrdisplay();
        break;

    case 4 :
        exit(0);
        break;
    
    default:
        printf("Invalid Input");
        break;
    }
    
    if (!(choice==4))
    {
        goto again;
    }
}

void insertion()
{
    printf("Enter the element to be inserted\n");
    scanf("%d",&ele);
    printf("Enter the position of element to be deleted\n");
    scanf("%d",&pos);
    n++;
    //insertion process
    for ( i = n; i >= pos-1; i-- )
    {
        a[i]=a[i-1];
    }
    a[pos-1]=ele;

}

void deletion()
{
    printf("Enter the element to be deleted\n");
    scanf("%d",&ele);
    printf("Enter the position of element to be inserted\n");
    scanf("%d",&pos);

    //insertion process
    for ( i = pos-1; i < n; i++ )
    {
        a[i]=a[i+1];
    }
    n--;
}


void arrdisplay()
{
    printf("the elements are\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
}
