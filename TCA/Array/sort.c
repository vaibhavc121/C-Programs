#include<stdio.h>

int main()
{
	int a[20];
	int i,j,no,temp;

	printf("enter elements in array: ");
	scanf("%d",&no);

	for(i=0;i<no;i++)
	{
		printf("enter array elements: ");
		scanf("%d",&a[i]);
	}

	for(i=0;i<no;i++)
	{
		for(j=i+1;j<no;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	for(i=0;i<no;i++)
	{
		printf("%d ",a[i]);
	}

}

