//26. Print the prime numbers counts available between 1 to 100
#include<stdio.h>

int main()
{
	int i,no,j;

	printf("enter term: ");
	scanf("%d",&no);

	for(j=1;j<=no;j++)
	{
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
				break;
			}
		}

		if(j==i)
		{
			printf("%d ",j);
		}
		/*else
		{
			printf("not prime");
		}*/
	}

	
	
}