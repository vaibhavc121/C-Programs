//22.C Program to find Smallest number among three.

#include<stdio.h>

int main()
{
	int a,b,c,d;

	printf("enter 4 nos: ");
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a<b && a<c && a<d)
	{
		printf("%d is small",a);
	}
	else if(b<a && b<c && b<d)
	{
		printf("%d is small",b);
	}
	else if(c<a && c<b && c<d)
	{
		printf("%d is small",c);
	}
	else
	{
		printf("%d is small",d);
	}


}