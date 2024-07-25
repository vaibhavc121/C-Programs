#include <stdio.h>

void display(int a[], int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}

int main()
{
	int a[5];
	int b[5]={10,20,30,40,50};
	int n;
	int i;

	printf("how many values: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter the no: ");
		scanf("%d ",&a[i]);
	}

	display(a,n);
	for(i=0;i<n;i++)
	{
		printf("enter the no: ");
		scanf("%d ",&b[i]);
	}
	display(b,n);

	return 0;
}