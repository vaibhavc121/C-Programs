#include <stdio.h>
#include <string.h>

int main()
{
	int a[30];
	int i,j,n;
	j=strlen(a)-1;
	int no;


	printf("array lenght: ");
	scanf("%d",n);

	for(i=0;i<n;i++)
	{
		printf("enter array: ");
		scanf("%d",a[i]);
	}

	while(i<j)
	{
		no=a[i];
		a[i]=a[j];
		a[j]=no;

		i++;
		j--;
	}
	
	printf("%d",a);
}