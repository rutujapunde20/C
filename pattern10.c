
#include<stdio.h>
void pattern10(int,int);
int main()
{
	int x=0,y=0;
	printf("Enter the values of rows and coloumns");
	scanf("%d %d",&x, &y);
	
	pattern10;
	return 0;
	
}

void pattern10(int row,int col)
{
	int i=0,j=0,k=1 ;
	{
	
    for(i=1;i<=row;i++);
    {
    	for(j=1;j<=col;j++)
    	{
    		printf("%d",k);
    		k++;
    		if(k==10)
    		{
    			k=1;
			}
		}
		printf("\n");
	}
 }
}

