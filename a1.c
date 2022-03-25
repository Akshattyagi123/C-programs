#include<stdio.h>
int main()
{
	int i;
	int a[5];
	printf("Enter the array elements=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("\nArray elements at index %d is:%d",i,a[i]);
	}
	return 0;
}
