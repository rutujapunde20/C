#include<stdio.h>
void pattern12(int,int);
int main()
{
	int x=0,y=0;
	printf("Enter the values of rows and coloumns");
	scanf("%d %d",&x, &y);
	
	pattern12(x,y);
	return 0;
	
}

void pattern12(int row,int col)
{
	int i=0,j=0;
    for(i=1;i<=row;i++)
    {
    	for(j=1;j<=col;j++)
    	{
    		if(i==j)
    		{
    			printf("1");
			}
			else
			{
				printf("0");
			}
		}
	}
	
}

