#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int n,x,y,j=0,score=0,a,b;

void draw()
{
	system("clear");
	srand(time(NULL));
	x=rand()%n+1;
	y=rand()%n+1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==x && j==y)
			{
				printf("8 ");
			}
			else
			{
				printf("9 ");
			}
		}
		printf("\n");
	}
}

void main()
{
	
	
	printf("Enter the number\n");
	scanf("%d",&n);
	
	while(j<5)
	{
		draw();
		printf("Find the odd one out\n");
		scanf("%d %d",&a,&b);
		if(a==x && b==y)
		{
			score++;
		}
		j++;
	}
	printf("The score is %d\n",score);
}
