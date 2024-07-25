#include <stdio.h>

void main()
{
	int age,sal;

	printf("enter age and sal: ");
	scanf("%d %d",&age, &sal);

	if(age>50)
	{
		if(sal<60000)
		{
			sal=sal+10000;
			printf("for age greater than 50 and less than 60K sal person incremented sal is: %d",sal);
		}
		else
		{
			sal=sal+5000;
			printf("for age greater than 50 and sal grater than 60K person incremented sal is: %d",sal);
		}
	}
	else
	{
		sal=sal+3000;
		printf("for age less than 50 and sal less than 60K person incremented sal is: %d",sal);
	}
}