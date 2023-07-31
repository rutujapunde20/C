#include<stdio.h>
void pattern2 (int,int)
int main()
{
	int x=0,y=0;
	printf("Enter the values of row and columns");
	scanf("%d %d",&x,&y)
	
	pattern2(x,y)
	return0;
	
}

void pattern2(int row,int col);
{
int i=0,j=0,row=0,col=0;
for(i=1;i<=row;i++)
{
	for(j=1;j<=col;j++)
	{
		printf("%d",j);
	}
	printf("\n");
}
}
