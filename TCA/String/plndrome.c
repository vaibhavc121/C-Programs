#include <stdio.h>
#include <string.h>

int main()
{
	char a[30];
	int i,j,flag;

	printf("enter string: ");
	gets(a);

	flag=1;
	i=0;
	j=strlen(a)-1;

	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		
	}

	for(i=0; a[i] != '\0'; i++)
	{
		if(a[j]>='a' && a[j]<='z')
		{
			a[j]=a[j]-32;
		}
		
	}
	

	while(i<j)
	{
		if(a[i] != a[j])
		{
			flag=0;
			break;
		}

		i++;
		j--;
	}

	if(flag==1)
	{
		printf("given string is palindrome");
	}
	else
	{
		printf("given string is not palindrome");
	}
	
}