//7.Write a program in C to find largest and smallest number in array.

#include<stdio.h>

int main()
{
	int a[30];
	int n,max,i,j;

	printf("enter array size: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter array element: ");
		scanf("%d",&a[i]);
	}

	max=a[0];

	
		for(j=1;j<n;j++)
		{
			if(max<a[j])
			{
				max=a[j];
			}
		}
	

	printf("largest: %d",max);


	
}