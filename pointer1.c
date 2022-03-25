#include<stdio.h>
void main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	printf("Address of a is=%x\n",&a);
	printf("Address of a is =%x\n",p);
	printf("value of a is=%d\n",a);
	printf("value of a is=%d\n",*p);
	printf("Address of b is=%d\n",&b);
	printf("Address of b is =%x\n",q);
	printf("value of b is=%x\n",b);
	printf("value of b is=%x\n",*q);
}

	