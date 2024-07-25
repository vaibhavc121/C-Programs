#include<stdio.h>

int main()
{
	float u,a,t,fv;
	printf("enter initial velocity=");
	scanf("%f",&u);

	printf("enter accelaration=");
	scanf("%f", &a);

	printf("enter time=");
	scanf("%f",&t);

        fv=u+a*t;

	printf("final velocity=%f", fv);
	return 0;

}