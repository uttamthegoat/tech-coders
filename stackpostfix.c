#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int stack[20],maxstack=10,op1,op2,res,top=-1,i,ans;
char post[30];

void compute();
void insert();
void push();

void main()
{
	insert();
	ans=stack[top--];
	printf("%d",ans);
}

void compute()
{
	op2=stack[top];
	top=top-1;
	op1=stack[top];
	top=top-1;
	switch(post[i])
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
	stack[++top]=res;
}

void insert()
{
	printf("Enter the postfix expression\n");
	gets(post);
	
	//seperation of symbols and operands
	for(i=0;i<strlen(post);i++)
	{
		if(post[i]>='0' && post[i]<='9')
		{
			push();
		}
		else if(post[i]=='+'||post[i]=='-'||post[i]=='*'||post[i]=='/'||post[i]=='%'||post[i]=='^')
		{
			compute();
		}
	}
}

void push()
{
	if(top==maxstack-1)
	{
		printf("Overflow");
	}
	else
	{
		top=top+1;
		stack[top]=post[i]-'0';
	}
}
