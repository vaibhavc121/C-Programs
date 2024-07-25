//calculate compound interest

#include <stdio.h>
#include <math.h>

int main()
{
	float p,r,n,CI;
	printf("enter principle amt: ");
	scanf("%f", &p);

	printf("enter ROI: ");
	scanf("%f", &r);

	printf("enter period: ");
	scanf("%f", &n);

	CI=p*(pow((1+r/100), n));

	printf("CI= %f", CI);

	return 0;
}
