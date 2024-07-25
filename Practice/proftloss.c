#include<stdio.h>

int main()
{
	int sp,cp, profit, loss;

	printf("enter selling price: ");
	scanf("%d", &sp);

	printf("enter cost price: ");
	scanf("%d", &cp);

	profit=sp-cp;
	loss=cp-sp;

	if(sp>cp)
	{
		printf("profit and profit is %d", profit);
	}
	else if (sp==cp)
	{
		printf("no profit no loss");
	}
	else
	{
		printf("loss and loss is %d", loss);
	}

	return 0;
}