#include <stdio.h>

int main()
{	
	char a[30];
	int acno;
	int amt;
	int bal;
	int wd;

	printf("pls enter your name: ");
	gets(a);

	printf("enter your account no: ");
	scanf("%d",&acno);

	printf("how much money do u want to deposit?");
	scanf("%d",&amt);

	printf("your new bal is: %d", amt);
	
	printf("how much money do u want to withdrar?");
	scanf("%d",&wd);

	bal=amt-wd;

	printf("balance: %d", bal);




}