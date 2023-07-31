#include<stdio.h>
int main()
{
	int a=012 , b=034, c=0*12 , d=0*34;
	int p,q,r,s;
	p=a&b;
	q=a||b;
	r=c&&d;
	s=c||d;
	
	printf("%d\t %d\t %d\t %d\n",p,q,r,s);
	return 0;
}
