#include <stdio.h>
void main()
{
  int n1, n2, i, temp, number, rem;
  printf("Enter two numbers(intervals): ");
  scanf("%d %d", &n1, &n2);
  printf("Armstrong numbers between %d an %d are: ", n1, n2);
  for(i=n1+1; i<n2; ++i)
  {
      temp=i;
      number=0;
      while(temp!=0)
      {
          rem=(temp%10);
          number+=rem*rem*rem;
          temp/=10;
      }
      if(i==number)
      {
          printf("%d ",i);
      }
  }
}
