//C program to convert string from upper case to lower case using strlwr function
#include<stdio.h>
#include<strings.h>
int main()
{
	char name[30];
	printf("Enter the name:");
	gets(name);
	puts(name);
	strlwr(name);
	printf("Modified string is=%s",name);
}
