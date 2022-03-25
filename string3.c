//Program to find length of string using strlen function
#include<stdio.h>
#include<string.h>
int main()
{
	int count=0;
	char name[30];
	printf("Enter the name:");
	gets(name);
	puts(name);
	count=strlen(name);
	printf("Length of string is=%d",count);
}

