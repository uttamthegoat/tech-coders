#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[20],max,op1,op2,res,top=-1,i,ele;
char post[30],operand;

int compute();
void insert();
void push();

void main()
{
	insert();
	for(i=top;i>=0;i--)
	{
		printf("%d\n",stack[i]);
	}
}

int compute()
{
	switch(operand)
	{
		case '+':res=op1+op2;
		break;
		
		case '-':res=op1-op2;
		break;
		
		case '*':res=op1*op2;
		break;
		
		case '/':res=op1/op2;
		break;
		
		case '%':res=op1%op2;
		break;
		
		case '^':res=pow(op1,op2);
		break;
		
		default:printf("Invalid Operand\n");
		break;
	}
	return res;
}

void insert()
{
	printf("Enter the postfix expression\n");
	scanf("%c",post);
	
	//seperation of symbols and operands
	for(i=0;i<strlen(post);i++)
	{
		if(post[i]>='0' && post[i]<='9')
		{
			push(post[i]);
		}
		else if(post[i]=='+'||post[i]=='-'||post[i]=='*'||post[i]=='/'||post[i]=='%'||post[i]=='^')
		{
			
		}
	}
}

void push(int ele)
{
	if(top==max-1)
	{	
		printf("Overflow\n");
	}
	else
	{
		printf("Enter the element to be pushed\n");
		scanf("%d",&ele);
		stack[++top]=ele;
	}
}
