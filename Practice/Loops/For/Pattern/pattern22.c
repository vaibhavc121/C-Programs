#include<stdio.h>

int main()
{
	int i,j,sp;
	for(i=5;i>=1;i++)
	{
		for(sp=1;sp<=i-1;sp++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++);
		{
			printf("* ");
		}
	}
	return 0;
}