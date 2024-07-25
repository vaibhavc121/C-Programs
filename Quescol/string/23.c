//23.C Program to sort characters of string.

#include<stdio.h>

int main()
{
	char a[30];
	int i,j,temp;

	printf("enter string: ");
	gets(a);

	for(i=0;a[i] != '\0';i++)
	{
		for(j=i+1;a[j] != '\0';j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	printf("%s",a);
	
}