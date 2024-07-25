//34.Count of the palindrome number
#include<stdio.h>

int main()
{
	int no,r,temp,rev=0,i,n;

	printf("enter term: ");
	scanf("%d",&no);

	for(i=1;i<=no;i++)
	{
		rev=0;
		n=i;
		

		while(n>0)
		{
			r=n%10;
			rev=(rev*10)+r;
			n=n/10;
		}

		if(rev==i)
		{
			printf("%d ",rev);
		}
		/*else
		{
			printf("not palin");
		}*/
	}

	
	
}