//C program to concatinate two strings using strcat function
#include<stdio.h>
#include<string.h>
int main()
{
	char name[6];
	char name1[10];
	printf("Enter the name:");
	gets(name);
	puts(name);
	printf("Enter the name1:");
	gets(name1);
	puts(name1);
	strncat(name,name1,3);
	printf("concatinate name is=%s\n",name);
}

	
	