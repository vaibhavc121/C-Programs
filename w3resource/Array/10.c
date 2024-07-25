/*10. Write a program in C to separate odd and even integers into separate arrays. */

#include<stdio.h>

int main()
{
	int a[30];
	int n,i;
	int even[30];
	int odd[30];
	int j=0,k=0;

	printf("enter term: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element: ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even[j]=a[i];
			j++;
		}
		else
		{
			odd[k]=a[i];
			k++;
		}
	}

	printf("\neven: ");
	for(i=0;i<j;i++)
	{
		printf("%d ",even[i]);
	}

	printf("\nodd: ");
	for(i=0;i<k;i++)
	{
		printf("%d ",odd[i]);
	}
}