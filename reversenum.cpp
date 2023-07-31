#include<stdio.h>
int main()
{
	int n,rem,sum;
	printf("Enter a number:");
	scanf("%d",&n);

		while(n!=0)
		{
			rem=n%10;
			sum=sum+rem;
			printf("%d\n",sum);
			
		    
		}
	    
	return 0;
}
