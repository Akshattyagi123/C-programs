//C program to compare two strings using strcmp function
#include<stdio.h>
#include<string.h>
int main()
{
	int value;
	char name[30];
	char name1[10];
	printf("Enter name:");
	gets(name);
	puts(name);
	printf("Enter name1:");
	gets(name1);
	puts(name1);
	value=strcmp(name,name1);
	if(value==0)
	{
		printf("String is equal\n");
	}
	else
	{
		printf("String is not equal\n");
	}
	printf("value is=%d\n",value);
}
