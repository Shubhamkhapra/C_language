/* 1 2 3 6 9 18 27 54... */
#include<stdio.h>
int main()
  {
    int i,a=1,b=2,n ,sum=0;
    printf("Enter the range of number:- ");
    scanf("%d", &n);
    printf("%d %d", a,b);
    for(i=3;i<=n;i++)
      {
          if((int)i%2==1)
            {
              a*=3;
              printf("%d ",a);
            }
          else 
            {
              b*=3;
              printf("%d ",b);
            }
            
      }
    
    return 0;
  }