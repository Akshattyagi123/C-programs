//C program to find length of string without using streln function using logic
#include<stdio.h>
int main()
{
	int i;
	int count;
	char name[5];
	printf("Enter the name:");
	gets(name);
	puts(name);
	while(name[i]!='\0')
	{
		count++;
		i++;
	}
	printf("string length is=%d",count);
}
