#include <stdio.h>

int main()
{
	char a[30];
	int i;
	int capcnt,smallcnt,dcnt,spcnt;

	capcnt=0;
	smallcnt=0;
	dcnt=0;
	spcnt=0;

	printf("enter your name: ");
	gets(a);

	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			smallcnt++;
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			capcnt++;
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			dcnt++;
		}
		else
		{
			spcnt++;
		}

	}
	printf("small cnt 	: %d \n", smallcnt);
	printf("cap cnt 	: %d \n", capcnt);
	printf("digit cnt 	: %d \n", dcnt);
	printf("spl char cnt: %d \n", spcnt);

	return 0;

}