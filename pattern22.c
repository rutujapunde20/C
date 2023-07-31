#include<stdio.h>
void pattern22(int);
int main()
{
	int x=0;
	printf("Entert the values of row ");
	scanf("%d",&x);
	
	pattern22(x);
	return 0;
	
}

void pattern22(int row)
{
	int i=0,j=0;
    for(i=1;i<=row;i++)
    {
    	for(j=1;j<=i;j++)
    	{
    		if(i%2==0)
    		{
    			printf("0");
			}
			else
			{
				printf("%d",j);
			}
			
		}
		printf("\n");
	}
	
}

