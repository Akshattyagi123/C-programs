//Program to print 2d array(matrix) and find sum

#include<stdio.h>
int main()
{
	int a[2][3],i,j,sum=0;
	printf("Enter the array elements=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
			sum=sum+a[i][j];
		}
		printf("\n");
	}
	printf("sum of the mmatrix=%d",sum);
	return 0;
}
