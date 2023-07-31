#include<stdio.h>
#include<string.h>

int main()
{
	char str[50];
	int len;
	
	printf("Enter the string to be reversed \n");
	gets(str);
	
	
	for(len=strlen(str)-1 ;len>=0; len--)
	
	printf("%c", str[len]);
	
	return 0;
}
