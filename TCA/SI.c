/* calculate SI */

#include <stdio.h>

int main()
{
	float p,r,t,SI;

	printf("enter principle amt: ");
	scanf("%f", &p);

	printf("enter ROI: ");
	scanf("%f", &r);

	printf("enter period: ");
	scanf("%f", &t);

	SI=(p*r*t)/100; //logic

	printf("SI = %.2f", SI);

	return 0;
}
