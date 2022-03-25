//WAP to read an array of 10 integers and count total no of even and odd elements

#include<stdio.h>
int main()
{
	int a[10],i;
	int even,odd;
	printf("Enter the array elements=");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if(a[i]%2==0)
		{
			even=even+1;
		}
		else
		{
			odd=odd+1;
		}
	}
	printf("Total no of even elements=%d\n",even);
	printf("Total no of odd elements=%d\n",odd);
	return 0;
}
	