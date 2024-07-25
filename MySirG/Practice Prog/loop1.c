#include<stdio.h>

int main()
{
	int no,i=1;
	
	printf("enter no: ");
	scanf("%d", &no);

	/*while(i<=no)
	{
		printf("vaibhav\n");
		i++;
	}*/

	/*for(;i<=5;i++)
	{
		printf("vaibhav\n");
	}*/

	do
	{
		printf("vaibhav\n");
		i++;
	}while(i>no);
	
	return 0;
}