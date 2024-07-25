#include<stdio.h>

int main()
{
	int no,i;
	
	printf("enter no: ");
	scanf("%d", &no);

	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			break;
		}
		
	}
	if(no==i)
	{
		printf("prime");
	}
	else
	{
		printf("not prime");
	}
	
	return 0;
}