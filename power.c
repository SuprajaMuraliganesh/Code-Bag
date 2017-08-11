#include <stdio.h>
void main()
{
    int base, exponent;
    long long result = 1;
    printf("Enter a base number: ");
    scanf("%d", &base);
    printf("Enter an exponent: ");
    scanf("%d", &exp);
    while (exp!= 0)
    {
        result *= base;
        --exp;
    }
    printf("Answer = %lld", result);
}
