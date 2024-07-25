// Online C compiler to run C program online
#include <stdio.h>

int main() 
{
    int a;
    
    printf("enter the number: ");
    scanf("%d", &a);
    
    if(a%5==0 && a%7==0)
    {
        printf("%d is divisible by 5 and 7",a);
    }
    else if(a%5==0)
    {
        printf("%d is divisible by 5",a);
    }
    else
    {
        printf(" %d is not divisible by 5 and 7",a);
    }

    return 0;
}