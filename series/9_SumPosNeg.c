/* 1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n */
#include<stdio.h>
int main()
  {
    double i,j, n ,sum=0,f;
    printf("Enter the range of number:- ");
    scanf("%lf", &n);
    for(i=1;i<=n;i++)
      {
          if((int)i%2==1)
            sum =sum +(i/(i+1));
          else 
            sum =sum -(i/(i+1));
      }
    printf("\nSum of series is :- %lf", sum);
    return 0;
  }