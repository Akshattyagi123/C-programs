#include<stdio.h>
int main()
{
	int i;
	int a[5];
	printf("Enter array elements=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("\nArray elements at index %d is :%d\n",i,a[i]); 
	}
	return 0;
}
