#include <stdio.h>
void main()
{
    int num,m,n;
    printf("Enter the range:");
    scanf("%d %d",&m,&n);
    printf("Print Odd Numbers in a given range m to n:\n");
    for (num = m; num <= n; num++)
        {
               if (num % 2 == 1)
                 printf ("%d ", num);
         } 
}
