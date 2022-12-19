#include<stdio.h>

void draw()
{
	for(int i=1;i<6;i++)
	{
		
		for(int j=1;j<12;j++)
		{
			if(i==2 || i==4)
			{
				printf("-");
			}
			else if(j==4 || j==8)
			{
				printf("|");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
void main()
{
	draw();
}
