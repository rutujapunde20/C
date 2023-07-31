//Write a program to accept array elements from user and display that elements

#include<stdio.h>
int main()
{
	int arr[50]={0}, i=0,n=0;
	printf("Enter any number");
	scanf("%d\n",&n);
	
	printf("Enter Elements of array:");
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&arr[i]);
	}
	printf("Array Elemets are:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d\n",arr[i]);
	}
	
	return 0;
}
