#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *link;
};
void isEmpty()
{
	printf("The stack is empty");
}
struct Node *push(struct Node *top,int item)
{
	struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
	newnode->data=item;
	newnode->link=top;
	top=newnode;
	return top;
}
struct Node *pop(struct Node *top)
{
	if(top==NULL){
		isEmpty();
		return NULL;
	}
	else{
		struct Node *temp=top;
		top=top->link;
		free(temp);
		return top;
	}
}

void display(struct Node *top)
{
	struct Node *temp=top;
//	temp=top;
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}
void search_linear(struct Node *top)
{
	int i=0,flag=0,value;
	struct Node *temp=top;
	printf("Enter the element to be found\n");
	scanf("%d",&value);
	while(temp!=NULL)
	{
		if(temp->data==value){
			flag=1;
			break;
		}
		else
			temp=temp->link;
		i++;
	}
	if(flag==1)
		printf("The element is found at %d node\n",i+1);
	else
		printf("The element is not found\n");
}

void main()
{
	struct Node *top=(struct Node*)malloc(sizeof(struct Node));
	top=NULL;
	/*top=push(top,45);
	top=push(top,65);
	top=push(top,75);
	top=push(top,85);
	top=push(top,95);
	top=push(top,105);
	display(top);*/
	//search_linear(top);
	printf("**************\n");
	top=pop(top);
	display(top);

}
