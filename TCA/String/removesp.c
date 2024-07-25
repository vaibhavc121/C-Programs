#include<stdio.h>
#include<string.h>

int main()
{
	char a[30];
	int len,i,j;

	printf("enter string: ");
	gets(a);

	len=strlen(a);
	printf("%d",len);

	for(i=0;i != '\0';i++)
	{
		if(a[i]==' ')
		{
			for(j=i;j != '\0';j++)
			{
				a[j]=a[j+1];
			}
		}
	}

	printf("%s",a);

}

