#include<stdio.h>
void pattern1(int,int)

int main();
int x,y;
{
	printf("Enter the values of rows and columns");
	scanf("%d %d",&x,&y);
	pattern1(x,y)
	return 0;
}

void pattern1(int row, int col)
int i=0,j=0;
for(i=1;i<=row;i++)
{
	for(j=1;j<=col;j++)
	{
		if(i==1||j==1||i==row||j==col)
		{
			printf("*");
		}
		else
		{
			printf("0");
		}
		
	}
	printf("\n");
}
