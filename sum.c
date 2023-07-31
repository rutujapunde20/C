#include<stdio.h>
int main()
{
	int a,b,sum,mul,div,sub;
	printf("Enter the numbers:");
	scanf("%d %d",&a,&b);
	
	sum=a+b;
	div=a/b;
	mul=a*b;
	sub=a-b;
	printf("%d\n %d\n %d\n %d\n",sum,mul,div,sub);
	return 0;
}
