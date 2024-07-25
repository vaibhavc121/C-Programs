#include<stdio.h>

int main()
{
	int no,pow,res=1,i;
	
	printf("enter no: ");
	scanf("%d", &no);

	printf("enter power: ");
	scanf("%d", &pow);
	//for(j=1;j<=1;j++)
	//{
		for(i=1;i<=pow;i++)
		{

			res=res*2;
		}

	//}
	printf("%d power %d is: %d", no,pow,res);
	
	
	return 0;
}