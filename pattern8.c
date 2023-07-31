//input=12 Output=1*2*3*4*5*6

#include<stdio.h>
void pattern8(int);
int main()
{
	int n=0;
	printf("Enter any number");
	scanf("%d",&n);
	
	pattern8(n);
	return 0;
	
}

void pattern8(int no)
{
	int i=0,count=1 ;
    for(i=1;i<=no;i++)
    {
    	if(i%2==0)
    	{
    		printf("*");
		}
		else
		{
			printf("%d",count);
			count++;
		}
	}
}

