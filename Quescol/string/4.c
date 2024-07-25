#include<stdio.h>
#include<string.h>

int main()
{
	int j,i,flag;
	char a[30];

	printf("enter string: ");
	gets(a);

	for()

	j=strlen(a)-1;
	flag=1;
	i=0;
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
		printf("palin");
	}
	else
	{

		printf("not palin");
	}


}