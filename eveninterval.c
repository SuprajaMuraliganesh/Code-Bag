#include <stdio.h>
void main()
{
   int num,m,n;
   printf("Enter the range:");
   scanf("%d %d",&m,&n);
  printf("Print Even Numbers in a given range m to n:\n");
   for (num = m; num <= n; num++)
        {
               if (num % 2 == 0)
                  printf ("%d ", num);
         }
}
