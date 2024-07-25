//16.To Check the String is palindrome or not.
#include<stdio.h>
#include<string.h>

int main()
{
	char a[30];
	int i=0;
	int flag=1;
	int j;
	printf("enter string: ");
	gets(a);
    
    j=strlen(a)-1;

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