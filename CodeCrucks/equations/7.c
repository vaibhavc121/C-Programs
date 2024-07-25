//7.Write C Program to Convert Minutes to Hours

#include<stdio.h>

int main()
{
	int min,hr,m;

	printf("enter minutes: ");
	scanf("%d",&min);Write C Program to Convert Days to Year, Month, Week and day

	hr=min/60;
	m=min%60;

	printf("Hour : minute - %d : %d",hr,m );
	
}