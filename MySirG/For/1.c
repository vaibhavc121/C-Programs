#include<stdio.h>

int main()
{
	int num,i,temp;

	printf("enter the term: ");
	scanf("%d", &num);

	for(i=1;i<=num;i++)
	{
		//printf("%d ",i);
		temp=temp+i;
		printf("%d ", temp);
	}
	
	//printf("\nsum of num: %d", temp);
	return 0;
}