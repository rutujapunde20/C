#include<stdio.h>
void pattern21(int);
int main()
{
	int x=0;
	printf("Entert the values of rows ");
	scanf("%d",&x);
	
	pattern21(x);
	return 0;
	
}

void pattern21(int row)
{
	int i=0,j=0,count=1;
    for(i=1;i<=row;i++)
    {
    	for(j=1;j<=i;j++)
    	{
    		printf("%d",count);
    		count++;
		}
		printf("\n");
	}
	
}

