//WAP to read two arrays of size 5 and store sum of these arrays in the third arrays
#include<stdio.h>
int main()
{
	int a[5],b[5],c[5];
	int i,sum;
	printf("Enter elements of first array=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter elements of second array=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<5;i++)
	{
		c[i]=(a[i]+b[i]);
		printf("Sum array elements at index %d=%d\n",i,c[i]);
	}
	return 0;
}


