/* Write C program for accept dimensions of cylinder and print the surface area and volume */

#include<stdio.h>
#define PIE 3.14

int main()
{
	float r,h,surface,volume;
	printf("enter radius=");
	scanf("%f", &r);

	printf("enter height=");
	scanf("%f", &h);

	surface=2*PIE*r*r+2*PIE*r*h;
	volume=PIE*r*r*h;

	printf("surface area=%f \n", surface);
	printf("volume of cylinder=%f", volume);
	return 0;
}