/*11. Write a program in C to sort elements of an array in ascending order.*/
#include<stdio.h>

int main()
{
	int a[30];
	int b[30];
	int n,i,j,temp;
	
	printf("enter term: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element: ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}