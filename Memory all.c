//Dynamic memory allocation for 1 D Array

#include<stdio.h>
int main()
{
	int *p=NULL;
	int i=0,n=0;
	printf("Enter size of array");
	scanf("%d\n",&n);
	
	p=(int*) malloc(n*sizeof(int));
	printf("Enter elements of array");
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&p[i]);
	}
	printf("Array Elements are:");
	for(i=0;i<n;i++)
	{
		printf("%d",p[i]);
	}
	printf("free the dynamically allocated memory!!!");
	free(p);
	return 0;
}
