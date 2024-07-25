
#include <stdio.h>

int main() 
{
    int a,b,c;
    
    printf("enter 1st no: ");
    scanf("%d", &a);
    
    printf("enter 2nd no: ");
    scanf("%d", &b);

    printf("enter 3rd no: ");
    scanf("%d", &c);

    if (a>b && a>c)
    {
        printf("%d is greater", a);
    }
    else if(a==b && b==c)
    {
        printf("all are equal");
    }
    else if (b>a && b>c)
    {
        printf("%d is greater", b);
    }
    else 
    {
        printf("%d is greater", c);
    }
    

    return 0;
}