/* 1! + 2! + 3! + 4! + 5! + ... + n! */
#include<stdio.h>
long int fact(long int);
int main()
  {
    long int i,j, n ,sum=0,f;
    printf("Enter the range of number:- ");
    scanf("%ld", &n);
    for(i=1;i<=n;i++)
      {
          f=fact(i);
            sum +=f;
          
      }
    printf("\nSum of series is :- %ld", sum);
    return 0;
  }
long int fact(long n)
  {
    long int i,fact=1;
    for(i=1;i<=n;i++)
      {
        fact=fact*i;
      }
    return fact;
  }