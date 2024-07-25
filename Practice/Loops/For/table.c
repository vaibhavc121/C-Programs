#include<stdio.h>

int main()
{
	int no,i,j;
	
	printf("enter no: ");
	scanf("%d", &no);

	for(i=1;i<=10;i++)
	{
		for(j=1;j<=no;j++)
		{
			printf("%dX%d = %d" "," ,j,i, i*j);
		}
		printf("\n");
	}
	
	return 0;
}