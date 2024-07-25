#include<stdio.h>

int main()
{
	int n1, n2, i , j, count = 0;
    printf("enter size of array 1 : ");
    scanf("%d",&n1);
    int arr1[n1];
    printf("enter elements of array 1 : ");
    for(i=0; i<n1; i++)
    {
        scanf("%d",&arr1[i]);
    }

    for(i=0; i<n1; i++)
    {
        printf("%d ",arr1[i]);
    }
}

