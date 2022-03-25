//C program to convert string from upper case to lower case without using strlwr function
#include<stdio.h>
int main()
{
	int i;
	char name[30];
	printf("Enter the name:");
	gets(name);
	puts(name);
	for(i=0;name[i]!='\0';i++)
	{
		if(name[i]>=65&&name[i]<=97)
		{
			name[i]=name[i]+32;
		}
	}
	printf("Modified string is=%s",name);
}

		
		
		