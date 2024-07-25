/*27. Multiplication of the given number
Enter the Table
7
Table upto
10
1*7=7
2*7=14 */

#include<stdio.h>

int main()
{
	int i,j;
	for(i=1;i<=10;i++)
	{
		for(j=7;j<=7;j++)
		{
			printf("%dX%d=%d", i,j,i*j);
		}
		printf("\n");
	}
}