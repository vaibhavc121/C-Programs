//22. Assume the string is he,xa,wa,re and give the output as hexaware
#include<stdio.h>

int main()
{
	
	int i=0;
	char a[30];

	printf("enter string: ");
	gets(a);

	
	for(i=0; a[i] != '\0'; i++)
	{
		if(a[i]=='v')
		{
			a[i]='*';
		}
		//printf("%s",a);
	}

	/*
	while(a[i] != '\0')
	{
		if(a[i]=='v')
		{
			a[i]='a';
		}
		i++;
	}

	
	int i=0;
    char s[50];
    printf("Enter String : ");
    gets(s);
    while(s[i]!='\0')
    {
        if(s[i]=='v')
        {
            s[i]='a';
        }
        i++;
    }
    printf("-------------------------------------");
    printf("\nString After Replacing 'a' by '*'");
    printf("\n-------------------------------------\n");
    printf("%s",s);
    return 0; */

	printf("%s",a); 

}