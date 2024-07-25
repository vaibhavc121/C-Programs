#include <stdio.h>

int main()
{
	int num, unit;

	printf("Enter the number: ");
	scanf("%d", &num);
	
	unit=num%10000;

	printf("unit digit is: %d\b", unit );
	

	return 0;
}