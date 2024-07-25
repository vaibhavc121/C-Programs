#include <stdio.h>

int main()
{
	char a[30];
	int volcnt,i;

	volcnt=0;

	printf("enter string: ");
	gets(a);

	for(i=0;a[i] != '\0';i++)
	{
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' ||
		   a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
		{
			volcnt++;
		}
	}

	printf("no of vowels in string: %d", volcnt);
}