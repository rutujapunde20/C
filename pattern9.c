//input=14 Output=12312312312312

#include<stdio.h>
void pattern9(int);
int main()
{
	int n=0;
	printf("Enter any number:");
	scanf("%d",&n);
	
	pattern9(n);
	return 0;
	
}

void pattern9(int no)
{
	int i=0,j=1 ;
    for(i=1;i<=10;i++)
    {
    	printf("%d",j);
    	j++;
    	if(j==24)
    	{
    		j=1;
		}
	}
}

