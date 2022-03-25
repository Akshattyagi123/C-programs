#include<stdio.h>
int main()
{
	int a=10,b=11;
	int *p,*q;
	p=&a,q=&b;
	*q=*p;
	printf("Value of a is=%d",*q);
}
