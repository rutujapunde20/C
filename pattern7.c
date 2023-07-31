//input=12 Output=1*3*5*7*9*11*

#include<stdio.h>
void pattern7(int);
int main()
{
	int n=0;
	printf("Enter any number");
	scanf("%d",&n);
	
	pattern7(n);
	return 0;
	
}

void pattern7(int no)
{
	int i=0 ;
    for(i=1;i<=no;i++)
    {
    	if(i%2==0)
    	{
    		printf("*");
		}
		else
		{
			printf("%d",i);
		}
	}
}

