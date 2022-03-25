#include<stdio.h>
int main()
{
	int marks[5];
	int i,sum=0;
	float avg;
	printf("Enter the marks of 5 subjects=");
	for(i=0;i<5;i++)
	{
		scanf("%d",&marks[i]);
	}
	for(i=0;i<5;i++)
	{
		sum=sum+marks[i];
	}
	avg=sum/5;
	printf("Sum of students marks=%d\n",sum); 
	printf("Average of students marks is=%f\n",avg);
	return 0;
}
