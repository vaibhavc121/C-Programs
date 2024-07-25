#include <stdio.h>

int main()
{
	float inr,conv;

	printf("Enter the price in INR: ");
	scanf("%f", &inr);

	conv=inr/82.10;
	
	printf("amount in USD: %f", conv);

	return 0;
}