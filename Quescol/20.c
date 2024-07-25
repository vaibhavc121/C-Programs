//20.C program to print first n Prime Number with explanation.

#include<stdio.h>

int main()
{
	int i,j,no;

	printf("enter no: ");
	scanf("%d",&no);

	for(j=2;j<=no;j++)
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