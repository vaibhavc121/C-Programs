#include <stdio.h>

void test(int no)
{
	int i;
	for(i=1;i<=no;i++)
	{
		printf("hello\n");
	}
	
}

 void main()
{
	int n;
	printf("how many times: ");
	scanf("%d",&n);
	test(n);

	//return 0;
}