//39.Count of Uppercase, lowercase, digits, special character
#include<stdio.h>

int main()
{

	char a[40];
	int i;
	int cntuc=0;
	int cntlc=0;
	int cntd=0;
	int cntsp=0;

	printf("enter string: ");
	gets(a);

	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			cntlc++;
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			cntuc++;
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			cntd++;
		}
		else
		{
			cntsp++;
		}

	}

	printf("lowercase		: %d \n",cntlc);
	printf("uppercase		: %d \n",cntuc);
	printf("digits			: %d \n",cntd);
	printf("spl characters	: %d \n",cntsp);
	
}