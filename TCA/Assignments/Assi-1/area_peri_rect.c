/* Write a C program to calculate area and perimeter of a rectangle */
#include<stdio.h>
int main()
{
	float length, breadth, area, peri;
	
	Printf("enter length=");
	Scanf("%f", &length);
	printf("enter breadth=");
	scanf("%f", &breadth);

	area=length*breadth;
	peri=2*length*breadth;

	printf("area of rectangle=%.2f\n",area);
	printf("perimeter of rectangle=%.2f", peri);

	
	return 0;


}