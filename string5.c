//C program to concatinate two strings without using strcat function
#include<stdio.h>
#include<string.h>
int main()
{
	int l1,l2,i;
	char name[30];
	char name1[10];
	printf("Enter name:");
	gets(name);
	puts(name);
	printf("Enter name1:");
	gets(name1);
	puts(name1);
	l1=strlen(name);
	l2=strlen(name1);
	printf("Length of first and second string is=%d %d\n",l1,l2);
	for(i=0;i<l2;i++)
	{
		name[l1+i]=name1[l2];
	}
	printf("string after concatination is=%s",name);
	puts(name1);
}

	
	
	