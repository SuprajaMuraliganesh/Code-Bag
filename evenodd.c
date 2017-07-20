#include<stdio.h>
void main()
{
 int n;
 printf("Enter the number:");
 scanf("%d",&n);
  if(n>0)
  {
   if(n%2==0)
   printf("The number is even");
   else
    printf("The number is odd");
}
  else
    printf("Enter a positive number");
}
