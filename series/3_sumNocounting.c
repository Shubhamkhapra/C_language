/* (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)*/
#include<stdio.h>
int main()
  {
    int i,j, n ,sum=0;
    printf("Enter the range of number:- ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
      {
        for(j=1;j<=i;j++)
          {
            sum +=j;
          }
      }
    printf("\nSum of series is :- %d", sum);
    return 0;
  }