#include <stdio.h>

int main()
{
	int n,i,sum;
	int a[5];

	printf("how many nos: ");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		printf("enter the no: ");
		scanf("%d",&a[i]);
	}

	/*for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
		}
		
	}*/

	for(i=0;i<n;i++)
	{
		//if(a[i]%2==0)
		{
			printf("%d ",a[i]);
			sum=sum+a[i];
		}
		
	}
	printf("\nSum: %d",sum);


}