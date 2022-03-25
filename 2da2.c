//program to print transpose of a matrix

#include<stdio.h>
int main()
{
	int a[2][3],i,j;
	int b[3][2];
	printf("Enter the elements of the matrix=");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The transpose of the matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	printf("Transpose stored in new Array=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}

