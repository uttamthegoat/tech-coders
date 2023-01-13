#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node *link;
};
int size1,size2;

/*struct Node *push(struct Node *head)
{
	struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the value of the node\n");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		newnode->link=NULL;
		head=newnode;
		return head;
	}
	else
	{
		struct Node *temp=head;
		while(temp->link==NULL)
		{
			temp=temp->link;
		}
		temp->link=newnode;
		newnode->link=NULL;
		return head;
	}
}*/

struct Node *push(struct Node *head)
{
	struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
	printf("Enter the value of the node\n");
	scanf("%d",&newnode->data);
	newnode->link=head;
	head=newnode;
	return head;
}

struct Node *concatenate(struct Node *head1,struct Node *head2)
{
	struct Node *head=(struct Node*)malloc(sizeof(struct Node));
	head=head1;
	while(head1->link!=NULL)
	{
		head1=head1->link;
	}
	head1->link=head2;
	return head;
}

void display(struct Node *head)
{
	struct Node *temp=head;
//	temp=top;
	printf("the elements are\n");
	while(temp!=NULL)
	{
		printf("%d\n",temp->data);
		temp=temp->link;
	}
}

void main()
{
	struct Node *head1=(struct Node*)malloc(sizeof(struct Node));
	head1=NULL;
	struct Node *head2=(struct Node*)malloc(sizeof(struct Node));
	head2=NULL;
	
	printf("Enter the number of nodes of first list\n");
	scanf("%d",&size1);
	for(int i=0;i<size1;i++)
	{
		head1=push(head1);
	}
	
	
	printf("Enter the number of nodes of first list\n");
	scanf("%d",&size2);
	for(int i=0;i<size2;i++)
	{
		head2=push(head2);
	}
	
	printf("The first list is\n");
	display(head1);
	printf("The second list is\n");
	display(head2);
	printf("The concatenated list is\n");
	head1=concatenate(head1,head2);
	display(head1);
}
