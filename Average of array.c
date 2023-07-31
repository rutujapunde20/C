//Write a program to accept array elements from user and display average of that elements

#include<stdio.h>
int main()
{
	int arr[50]={0}, i=0,n=0,sum=0;
	float avg=0.0f;
	printf("Enter any number");
	scanf("%d \n",&n);
	//flushall();
	printf("Enter Elements of array:");
	
	
	for(i=0;i<n;i++)
	{
		scanf("%d\n",&arr[i]);
	}

	
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/n;
	printf("Sum is: %d \n",sum);
	printf("Average is : %f \n",avg);
	return 0;
}
