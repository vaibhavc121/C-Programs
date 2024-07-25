//string reverse
#include<stdio.h>
#include<string.h>

int main()
{
	char a[30];
	int len,i,j;
	char temp;

	printf("enter string: ");
	gets(a);

	i=0;
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

