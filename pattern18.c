#include<stdio.h>
void pattern18(int,int);
int main()
{
	int x=0,y=0;
	printf("Entert the values of rows and coloumns");
	scanf("%d %d",&x, &y);
	
	pattern18(x,y);
	return 0;
	
}

void pattern18(int row,int col)
{
	int i=0,j=0;
    for(i=1;i<=row;i++)
    {
    	for(j=1;j<=col;j++)
    	{
    		if(i%2==0)
    		{
    			printf("*");
			}
			else
			{
				printf("1");
			}
			
		}
		printf("\n");
	}
	
}

