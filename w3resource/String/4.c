//4. Write a program in C to print individual characters of a string in reverse order.

#include<stdio.h>
#include<string.h>

int main()
{
	char a[30];
	char temp;
	int j,i;

	printf("enter string: ");
	gets(a);

	j=strlen(a)-1;
	i=0;

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