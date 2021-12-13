/* [(1^1)/1] + [(2^2)/2] + [(3^3)/3] + [(4^4)/4] + [(5^5)/5] + ... + [(n^n)/n] */
#include<stdio.h>
long int power(long int, long int);
int main()
  {
    long int i,j, n ,sum=0,p;
    printf("Enter the range of number:- ");
    scanf("%ld", &n);
    for(i=1;i<=n;i++)
      {
        sum =sum +(power(i,i)/i);
          
      }
    printf("\nSum of series is :- %ld", sum);
    return 0;
  }
long int power(long n, long p)
  {
    long int i,power=1;
    for(i=1;i<=p;i++)
      {
        power=power*n;
      }
    return power;
  }