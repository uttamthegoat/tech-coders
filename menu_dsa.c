#include<stdio.h>
#include<stdlib.h>

void insertion(int a[10],int n);
void deletion(int a[10],int n);
void arrdisplay(int a[10],int n);
            
void main(){
    int a[10],i,n,choice;
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
    case 1 :n++;
        insertion(a,n);
        break;

    case 2 :
        deletion(a,n);
        n--;
        break;

    case 3 :
        arrdisplay(a,n);
        break;
    
    default:printf("Invalid Input");
        break;
    }
    
    if (!(choice==3))
    {
        goto again;
    }
}

void insertion(int a[10],int n){

    int i,ele,pos;
    printf("Enter the element to be inserted\n");
    scanf("%d",&ele);
    printf("Enter the position of element to be inserted\n");
    scanf("%d",&pos);

    //insertion process
    for ( i = n; i >= pos-1; i-- )
    {
        a[i]=a[i-1];
    }
    a[pos-1]=ele;

}

void deletion(int a[10],int n){
    int i,ele,pos;
    printf("Enter the element to be found\n");
    scanf("%d",&ele);
    printf("Enter the position of element to be inserted\n");
    scanf("%d",&pos);

    //insertion process
    for ( i = pos-1; i < n; i++ )
    {
        a[i]=a[i+1];
    }
}


void arrdisplay(int a[10],int n){
    int i;
    printf("the elements are\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\n",a[i]);
    }
    
}