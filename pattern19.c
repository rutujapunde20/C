#include<stdio.h>
void pattern15(int,int);
int main()
{
	int x=0,y=0;
	printf("Entert the values of rows and coloumns");
	scanf("%d %d",&x, &y);
	
	pattern15(x,y);
	return 0;
	
}

void pattern15(int row,int col)
{
	int i=0,j=0;
    for(i=1;i<=row;i++)
    {
    	for(j=1;j<=col;j++)
    	{
    		printf("*");
		}
		printf("\n");
	}
	
}

