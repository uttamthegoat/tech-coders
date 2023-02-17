#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// #include<conio.h>
typedef struct node
{
	int ph;
	char name[20];
	char usn[10];
	char branch[20];
	struct node *link;
	struct node *prev;
} queue;
queue *front;
queue *rear;
void enqueue(int ph, char name[20], char usn[10], char branch[20])
{
	queue *newnode;
	newnode = (queue *)malloc(sizeof(queue));
	newnode->ph = ph;
	strcpy(newnode->name, name);
	strcpy(newnode->usn, usn);
	strcpy(newnode->branch, branch);
	newnode->link = NULL;
	newnode->prev = NULL;
	if (front == NULL && rear == NULL)
	{
		front = rear = newnode;
		front->prev = NULL;
	}
	else
	{
		rear->link = newnode;
		newnode->prev = rear;
		rear = newnode;
	}
}
void dequeue()
{
	if (front == NULL)
	{
		printf("The queue is Empty\n");
	}
	else
	{
		queue *p = front;
		front = front->link;
		free(p);
	}
}
void display()
{
	queue *temp = front;
	if (front == 0 && rear == 0)
	{
		printf("Underflow");
	}
	else
	{
		while (temp != NULL)
		{
			printf("\n Name=%s\n usn=%s\n Branch=%s\n Phone=%d\n", temp->name, temp->usn, temp->branch, temp->ph);
			temp = temp->link;
		}
	}
}
void main()
{
	front = NULL;
	rear = NULL;
	int choice;
	int ph;
	char name[20];
	char usn[10];
	char branch[20];

	do
	{
		printf("Menu\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\nEnter you choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("Enter the student's name: ");
			scanf("%s", name);
			printf("Enter the student's USN: ");
			scanf("%s", usn);
			printf("Enter the student's branch:");
			scanf("%s", branch);
			printf("Enter the student's phone number: ");
			scanf("%d", &ph);
			enqueue(ph, name, usn, branch);
			break;
		case 2:
			dequeue();
			break;
		case 3:
			display();
			break;
		case 4:
			printf("Thank You\n");
			exit(0);
			break;
		default:
			printf("Invalid choice.\n");
			break;
		}
	} while (choice != 4);
}
