#include<stdio.h>
#include<stdlib.h>
int a[10],i,op,top=-1,max,ele;
void push();
void pop();
void display();
void exit1();

void main()
{
	printf("Enter the no of elements of a stack\n");
	scanf("%d",&max);
	do
	{
		printf("Enter you choice:\n1.Push\n2.Pop\n3.Display\n4.Exit\n");
		scanf("%d",&op);
		
		
		switch(op)
		{
			case 1:push();
			break;
		
			case 2:pop();
			break;
		
			case 3:display();
			break;
			
			case 4:exit1();
			break;
		
			default:printf("Invalid Input\n");
			break;
		}
	}while(!(op==4));
}

void push()
{
	if(top==max-1)
	{	
		printf("Overflow\n");
	}
	else
	{
		printf("Enter the element to be pushed\n");
		scanf("%d",&ele);
		a[++top]=ele;
	}
}

void pop()
{
	if(top==-1)
	{
		printf("Underflow\n");
	}
	else
	{
		ele=a[top--];
	}
}
void display()
{
	printf("The elements of the stack are\n");
	for(i=top;i>=0;i--)
	{
		printf("%d\n",a[i]);
	}
}

void exit1()
{
	exit(0);
}
