#include<stdio.h>
#include<math.h>

int move=0;

void tower(int n,char a[10],char b[10],char c[10]);

int main()
{
	int n,t;
	printf("Enter number of discs\n");
	scanf("%d",&n);
	tower(n,"Tower1","Tower2","Tower3");
	t=pow(2,n)-1;
	printf(" number of moves=%d\n",t);
	
	return 0;
}

void tower(int n,char a[10],char b[10],char c[10])
{
	if(n==1)
	{
		printf("move disc %d from %s to %s\n",n,a,c);
		return;
	}
	else
	{
		
		tower(n-1,a,c,b);
		printf("move disc %d from %s to %s\n",n,a,c);
		tower(n-1,b,a,c);
		return;
	}
	
}
