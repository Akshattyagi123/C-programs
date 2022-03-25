//C program to compare two strings without strcmp function
#include<stdio.h>
#include<string.h>
int main()
{
	int flag=0,i;
	char name[6];
	char name1[6];
	printf("Enter name:");
	gets(name);
	puts(name);
	printf("Enter name1:");
	gets(name1);
	puts(name1);
	for(i=0;name[i]!='\0'|| name1[i]!='\0';i++)
	{
		if(name[i]!=name1[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("string is not equal");
	}
	else
	{
		printf("string is equal");
	}
}


