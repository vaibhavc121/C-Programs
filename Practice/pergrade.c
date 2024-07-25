#include<stdio.h>

int main()
{
	float p,c,b,m,com,per;

	printf("enter marks of phy: ");
	scanf("%f", &p);

	printf("enter marks of phy: ");
	scanf("%f", &c);

	printf("enter marks of phy: ");
	scanf("%f", &b);

	printf("enter marks of phy: ");
	scanf("%f", &m);

	printf("enter marks of phy: ");
	scanf("%f", &com);

	per=(p+c+b+m+com)/500*100;

	printf("%f \n",per);

	if(per>=90)
	{
		printf("Grade A");
	}
	else if(per>=80)
	{
		printf("Grade B");
	}
	else if(per>=70)
	{
		printf("Grade C");
	}
	else if(per>=60)
	{
		printf("Grade D");
	}

	else if(per>=40)
	{
		printf("Grade E");
	}
	else
	{
		printf("F");
	}

	return 0;


}

