#include<stdio.h>
void pattern17(int,int);
int main()
{
	int x=0,y=0;
	printf("Enter the values of rows and coloumns");
	scanf("%d %d",&x, &y);
	
	pattern17(x,y);
	return 0;
	
}

void pattern17(int row,int col)
{
	int i=0,j=0;
    for(i=1;i<=row;i++)
    {
    	for(j=1;j<=col;j++)
    	{
    		if(i==j)
    		{
    			printf("i");
			}
			elseif(i<j);
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
	
}

