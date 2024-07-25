#include<stdio.h>

int main()
{
	int no,sum=0,i;
	
	printf("enter no: ");
	scanf("%d", &no);
	
	for(i=1;i<no;i++)
	{
		if(no%i==0)
		{
			printf("%d ",i);
			sum=sum+i;
		}


		
	}
	printf("\nsum: %d",sum);
	if(sum==no)
		{
			printf("\nperfect no");
		}
		else
		{
			printf("\nnot perfect");
		}

	return 0;
}