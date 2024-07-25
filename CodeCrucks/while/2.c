#include<stdio.h>

int main()
{
	int no,cnt=0;

	printf("enter no: ");
	scanf("%d",&no);	

	while(no>0)
	{
		no=no/10;
		cnt++;

	}
	printf("%d",cnt);
}		