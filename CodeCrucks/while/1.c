//1.Write C Program to Print “Hello world” 10 Times using While loop

#include<stdio.h>

int main()
{
	int i,no,f3;
	int f1=0,f2=1;

	printf("enter no: ");
	scanf("%d",&no);

	
	i=1;
	while(i<=no)
	{
		f3=f1+f2;
		printf("%d ",f3);
		f2=f3;
		f1=f2;
		i++;
	}

	//printf("%d",);
	
}