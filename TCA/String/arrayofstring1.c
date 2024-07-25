#include<stdio.h>

int main()
{
	char a[10][30];
	int i,n;

	printf("how many nos: ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		printf("enter city name: ");
		scanf("%s",a[i]);
	}

	for(i=0;i<n;i++)
	{
		printf("%s ",a[i]);
	}
	
}