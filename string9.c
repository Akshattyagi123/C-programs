//C program to reverse a string without using sterrev function
#include<stdio.h>
#include<string.h>
int main()
{
	int l,i;
	char ch;
	char name[30];
	printf("Enter the name:");
	gets(name);
	puts(name);
	l=strlen(name);
	printf("Length of string is=%d\n",l);
	for(i=0;i<l/2;i++)
	{
		ch=name[i];
		name[i]=name[l-1-i];
		name[l-1-i]=ch;
	}
	printf("Reversed string is=%s\n",name);
}


		
		
	
