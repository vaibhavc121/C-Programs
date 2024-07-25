//5. Print the amstrong number available between 0 to 1000
#include<stdio.h>

int main()
{
	//int temp=0,n,sum=0,r;
	//int i;
	int n;
	

	//printf("enter term: ");
	//scanf("%d",&n);

	for (int n = 1; n <= 1000; n++) 
	{
		int a, i = 0, j = 0;
		a = n;
		while (a > 0)
		{
		i = a % 10;
		j = j + (i * i * i);
		a = a / 10;
		}
		if (n == j) 
		{
		printf("%d ",n);
        }
    }
 


	/*
	if(sum==temp)
	{
		printf("armstg");
	}
	else
	{
		printf("not armstg");
	}
	printf("\n%d",sum); */



	
}