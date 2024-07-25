#include <stdio.h>
#include <string.h>
int main()
{
	char a[30];
	int n;
	char ch;
	int i,j;

	printf("enter string: ");
	gets(a);

	n=strlen(a);
	//printf("%d",n);

	i=0;
	j= strlen(a)-1;

	while(i<j)
	{
		ch=a[i];
		a[i]=a[j];
		a[j]=ch;

		i++;
		j--;
	}

	printf("%s",a);


}