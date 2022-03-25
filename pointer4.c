#include<stdio.h>
void main()
{
	int d;
	int a[5]={2,4,3,0,-7};
	int *p=&a[0];
	int *q=&a[3];
	//d=q-p;
	printf("Value of q-p is=%d\n",q-p);
	q=q-2;
	printf("Value is=%d",*q);
}
