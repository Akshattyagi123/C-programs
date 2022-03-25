//Program to print sum of individual rows and columns
#include<stdio.h>
int main()
{																	
	int a[3][3],i,j,sr,sc,sd1,sd2,sum=0,size=3;						
	printf("Enter the elements of the array=\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		sr=sc=0;
		for(j=0;j<3;j++)
		{
			sr=sr+a[i][j];
			sc=sc+a[j][i];
		}
		printf("sr=%d,sc=%d",sr,sc);
	}
	printf("\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(i==j)
			{
				sd1=sd1+a[i][j];
			}
			if((i+j)<size-1)
			{
				sd2=sd2+a[i][j];
			}	
			printf("sd1=%d,sd2=%d",sd1,sd2);
		}
		sum=sd1+sd2;
		printf("%d\t",sum);
	}
	return 0;
}




