#include<stdio.h>

int main()
{
	int i,n,f1=0,f2=1,f3;
	
	printf("enter term: ");
	scanf("%d", &n);
	printf("1 ");
	for(i=1;i<n;i++)
	{
		f3=f1+f2;
		printf("%d ",f3);
		f1=f2;
		f2=f3;

	}
	
	return 0;
}