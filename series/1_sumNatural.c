/* 1 + 2 + 3 + 4 + 5 + ... + n */
#include<stdio.h>
int main()
  {
    int i, n ,sum=0;
    printf("Enter the range of number:- ");
    scanf("%d", &n);
    for(i=1;i<=n;i++)
      {
        sum +=i;
      }
    printf("\nSum of series is :- %d", sum);
    return 0;
  }