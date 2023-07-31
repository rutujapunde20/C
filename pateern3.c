#include<stdio.h>
void pattern3(int,int);

int main()
{
	int x=0,y=0;
	printf("Enter the values of row and columns");
	scanf("%d %d",&x,&y);
	
	pattern3(x,y);
	return 0;
	
}

void pattern3(int row,int col)
{
int i=0,j=0,k=1;
for(i=1;i<=row;i++)
{
	for(j=1;j<=col;j++)
	{
		k++;
		printf("%d",k);
	}
	printf("\n");
}
}

