#include<stdio.h>

int main()
{
	int num,rev=0,rem,tnum;
	printf("enter no: ");
	scanf("%d", &num);
	tnum=num;
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;

	}
	//printf("%d",rev);
	if(tnum==rev)
	{
		printf("no is palindrome");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
}