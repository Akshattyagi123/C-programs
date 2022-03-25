//C program to reverse a string with strrev function
#include<stdio.h>
#include<string.h>
int main()
{
	char name[30];
	printf("Enter the name:");
	gets(name);
	puts(name);
	strrev(name);
	printf("Reversed string is=%s",name);
}

	
