//20.Print the numbers in descending order
#include<stdio.h>

int main()
{
	int temp;
	int i,j;
	int a[30];

	for(i=0;i<5;i++)
	{
		printf("enter array element: ");
		scanf("%d", &a[i]);
	}

	for(i=0;i<5;j++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i] > a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}

	}

	for(i=0;i<5;i++)
	{
		printf("%d ", a[i]);
	}

	
}