//Accpet any n nom and display its sum
#include<stdio.h>

int main()
{
	
	int i,sum=0,n;

	printf("enter term: ");
	scanf("%d", &n);

	for(i=1;i<=n;i++)
	{
		
		printf("%d \n",i);
		sum=sum+i;
		

	}
	printf("%d",sum);
}