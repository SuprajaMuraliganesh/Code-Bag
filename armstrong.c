#include <stdio.h>
void main()
{
    int num, org, rem, res = 0;
    printf("Enter a three digit integer: ");
    scanf("%d", &num);
    org= num;
    while (org!= 0)
    {
        rem = org%10;
        res+= rem*rem*rem;
        org/= 10;
    }
    if(res == num)
        printf("%d is an Armstrong number.",num);
    else
        printf("%d is not an Armstrong number.",num);
}
