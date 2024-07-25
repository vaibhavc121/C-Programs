//15. Reverse the String
#include<stdio.h>
#include<string.h>

int main()
{
	char a[30];
	char temp;
	int i=0;
	int j;

	printf("enter string: ");
	gets(a);

	j=strlen(a)-1;

	while(i<j)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;

		i++;
		j--;
	}

	printf("%s",a);
	
}