#include<stdio.h>
int main()
{ 
    int arr[10][10],s[10],i,j,emp,rel,aid,m,no=0;
    int b[20],k=0,flag=0,count=0,c[20],l=0;
    printf("\n enter the no of employees,relationships,adam id");
    scanf("%d\t%d\t%d\n",&emp,&rel,&aid);
    printf("\n enter the ralationships");
    for(i=0;i<emp;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d\t",&arr[i][j]);
        }
        printf("\n");
    }
    printf("\n enter the salaries of emplyees");
    for(j=0;j<emp;j++)
    {
        scanf("%d\t",&s[j]);
    }
    //printing
    for(i=0;i<emp;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<emp;i++)
    { 
       
        if(aid==arr[i][0])
        {
            b[k]=arr[i][1];++flag;
            k++;
           // printf("%d",arr[i][1]);
           
        }
       
    }        for(k=0;k<flag;k++)
        {
            printf("%d\t",b[k]);
            for(i=0;i<emp;i++)
            {
                if(b[k]==arr[i][0]&&b[k]!=arr[i][1])
                {
                    c[l]=arr[i][1];
                    printf("c array:%d",c[l]);
                    l++;++count;
                }
            }
        }
        printf("\nflag:%d\n",flag);
       for(i=0;i<emp;i++)
        {
           for(k=0;k<flag;k++)
          {
            if(b[k]==arr[i][0]&&arr[i][1]!=aid)
            {
                c[l]=arr[i][1];
                l++;++count;
                printf("%d",c[l]);
            }   
          }       
        i++;
        }  
          
         m=flag+count;
         l=0;
      for(k=flag;k<m;k++)
      {
           b[k]=c[l];
           l++;
         //printf("\n remaining:%d\t",b[k]);
      }
      for(k=0;k<m;k++)
      {
         printf("%d\t",b[k]);
      }
      // for printing the employees id of low salary
      k=0;
      for(k=0;b[k]!='\0';k++)
      {
          if(s[k]<=s[1]&& k!=1)
          {
              printf("\n%d",b[k]);
              no++;
         
          }
         
      }
      printf("\n%d",no);
    return 0;
}
