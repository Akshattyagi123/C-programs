//Addition Of pointer using pointer arithmetic
#include<stdio.h>
void main()
{
	int a[5]={1,4,-2,3,5};
	int *p=&a[0];
	printf("value of the element is=%d\n",*p);
	printf("Address of the element is=%u\n",p);
	p=p+2;
	printf("Value of element is=%d\n",*p);
	printf("Address of element is =%u\n",p);
}
