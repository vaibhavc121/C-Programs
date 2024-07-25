//calculate compound interest

#include <stdio.h>
#include <math.h>

int main()
{
	float num,rest,power;
	printf("enter number: ");
	scanf("%f", &num);

	printf("enter power value: ");
	scanf("%f", &rest);
	
	power=pow(num,rest);

	printf("power= %f", power);

	return 0;
}
