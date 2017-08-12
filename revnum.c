#include<stdio.h>
void main()
{
int i=0,m,n,a,rev[10];
printf("Enter the number:");
scanf("%d",&n);
while(n!=0)
{
a=n%10;
rev[i]=a;
i++;
n=n/10;
}
m=i;
printf("The reverse of a number is ");
for(i=0;i<m;i++)
{
printf("%d",rev[i]);
}
}





