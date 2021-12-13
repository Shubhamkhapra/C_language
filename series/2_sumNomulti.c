/* (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n) */
#include<stdio.h>
int main()
  {
    int i, n ,sum=0;
    printf("Enter the range of number:- ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
      {
        sum =sum+(i*i);
      }
    printf("\nSum of series is :- %d", sum);
    return 0;
  }