#include <stdio.h>

int main()
{
	int i=77;
	int *p=&i;

	printf("%d\n",i);
	printf("%d\n",*p);

	*p=45;

	printf("%d\n",i);
	printf("%d\n",*p);

	printf("%lu\n",&i);
	printf("%lu\n",p);
	printf("%lu\n",&p);




}