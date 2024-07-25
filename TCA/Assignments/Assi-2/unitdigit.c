#include <stdio.h>

int main()
{
	int num, unit;

	printf("Enter the number: ");
	scanf("%d", &num);
	
	unit=num%10;

	printf("unit digit is: %d", unit );
	

	return 0;
}