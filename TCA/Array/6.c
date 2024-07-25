#include <stdio.h>


int search(int a[], int n,int data)
{
	int i;
	for(i=0;i<n;i++)
	{
		if (a[i]==data)
		{
			return i;
		}

	}
	return -1;
	
}

int main()
{
	int a[5]={10,20,30,40,50};
	int n=5;
	int data=60;
	int rval;

	rval=search(a,n,data);
	printf("%d is found at index %d", data, rval);

	return 0;

}