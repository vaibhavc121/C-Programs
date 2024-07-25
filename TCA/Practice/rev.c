#include<stdio.h>

int main()
{
	int num,rev=0,rem,tnum;
	int i;
	int cnt=0;
	printf("enter no: ");
	scanf("%d", &num);
	tnum=num;
	for(i=1;i<num;i++)
	{
	while(num>0)
	{
		rem=num%10;
		rev=(rev*10)+rem;
		num=num/10;

	}
	if(num==rev)
	{
		cnt++;
	}


	}
	//printf("%d",rev);

	
	printf("%d",cnt);


	/*if(tnum==rev)
	{
		printf("no is palindrome");
	}
	else
	{
		printf("not palindrome");
	}*/
	return 0;
}