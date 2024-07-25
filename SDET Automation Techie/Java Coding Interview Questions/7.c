//7. Print the count of the given number
#include<stdio.h>

int main()
{
	int n,mod;
	int cnt=0;
	int sum=0;


	printf("enter no: ");
	scanf("%d",&n);

	while(n>0)
	{
		//mod=n%10;
		//sum=sum+mod;
		n=n/10;
		cnt++;
	}

	printf("count: %d",cnt);
	
}