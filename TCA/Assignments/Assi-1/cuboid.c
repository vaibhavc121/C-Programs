/* Write C program to accept 3 dimensions length breadth it and height of cuboid and print surface area */
#include<stdio.h>

int main()
{
	float length,breadth,height,surface;
	
	printf("enter length=");
	scanf("%f",&length);
	
	printf("enter breadth=");
	scanf("%f", &breadth);

	printf("enter height=");
	scanf("%f",&height);
	
	surface=2*(length*breadth+length*height+breadth*height);

	printf("surface area=%f",surface);
}