#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
int i;
int op1,op2,stack[20],ans,top;
char postfix[10],symbol;
int compute(char symbol,int op1,int op2)
{
	switch(symbol)
	{
		case '+':ans=op1+op2;
						 break;
		case '-':ans=op1-op2;
						 break;
		case '*':ans=op1*op2;
						 break;
		case '/':ans=op1/op2;
						 break;
		case '^':ans=pow(op1,op2);
						 break;
		case '%':ans=op1%op2;
						 break;
		default:printf("invalid operator");
						break;
	}
	return ans;
}
void main()
{
	top=-1;
	printf("enter the postfix expression");
	gets(postfix);
	for(i=0;i<strlen(postfix);i++)
	{
		symbol=postfix[i];	
		if(isdigit(symbol))
		{
			stack[++top]=symbol-'0';
		}
		else
		{
			op2=stack[top--];
			op1=stack[top--];
			compute(symbol,op1,op2);
			stack[++top]=ans;
		}
	}
	ans=stack[top--];
	printf("%d",ans);
	
}

 

