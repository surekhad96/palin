#include <stdio.h>
int main()
{
    int a, n, b=0;
    printf("Enter any number to check palindrome: ");
    scanf("%d", &a);
    num = a;
    while(a!= 0)
    {
        b = (b * 10) + (a % 10);
        a = a / 10;
    }
    if(b == n)
    {
        printf("%d is palindrome.", n);
    }
    else
    {
        printf("%d is not palindrome.", n);
    }
    return 0;
} 
