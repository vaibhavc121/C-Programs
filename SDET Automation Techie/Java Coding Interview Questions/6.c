//6. To print the palindrome available between 0 to 100
#include<stdio.h>

int main()
{
	int no,i;
	int mod,n;
	printf("enter term: ");
	scanf("%d", &no);

	//tnum=no;
	for(i=1;i<=no;i++)
	{		
		int rev=0;
		n=i;
		while(n>0)
		{
			mod=n%10;
			rev=(rev*10)+mod;
			n=n/10;
		}

		if(rev==i)
		{
			printf("%d ",rev);
		}
	}

	
	
}

