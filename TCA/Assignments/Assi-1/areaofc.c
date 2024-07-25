/* Write a C program to calculate area and circumference of circle */

#include<stdio.h>

int main()
{
float r,area,circum;
float pie=3.14;

printf("enter the radius of circle");
scanf("%f", &r);

area=pie*r*r;
circum=2*3.14*r;

printf("area of circle is=%.2f \n", area);
printf("cicumference of circle=%f", circum);

return 0;

}