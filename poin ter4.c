#include<stdio.h>
void main()
{
	int a[5]={1,3,-2,3,1};
	int *p=&a[0];
	int *q=&a[3];
	d=p-q;
	printf("Value of d is=%d",d);
}
