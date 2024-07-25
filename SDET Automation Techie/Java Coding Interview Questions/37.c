//37. Count of vowels and non vowels
#include<stdio.h>
#include<string.h>

int main() 
{
    char a[30];
    int i;
    int cntvwl=0;
    int cntnvwl=0;
    
    printf("enter string: ");
    gets(a);
    
    for(i=0; a[i] != '\0'; i++)
    {
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u')
        {
            cntvwl++;
        }
        else
        {
            cntnvwl++;
        }
    }
    
    printf("count of vowels     : %d \n", cntvwl);
    printf("count of non vowels : %d \n", cntnvwl);
    
    
}