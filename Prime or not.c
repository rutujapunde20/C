#include<stdio.h>
int main()
{
	int i,m,n ,flag=0;
	
	printf("Enter number");
	scanf("%d",&n);
	
	m=n/2;
	for(i=2;i<=m;i++)
	{
	
	if(i%2==0)
	{
		printf("Not prime");
	}
	flag=1;
	break;
    }
	if(flag==0)
	{
		printf("Prime");
	}
	return 0;
}
