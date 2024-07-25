//19.C Program to print all even numbers in array.

#include<stdio.h>

int main()
{
	int a[30];
	int n,i,no;

	printf("enter array size: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element: ");
		scanf("%d", &a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
	}
}