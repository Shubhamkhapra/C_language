/* [(1^1)/1!] + [(2^2)/2!] + [(3^3)/3!] + [(4^4)/4!] + [(5^5)/5!] + ... + [(n^n)/n!] */
#include<stdio.h>
double power(long int, long int);
double fact(long int);
int main()
  {
    long int x,i,j, n ,p,f;
    double sum=0;
    printf("Enter the range of number:- ");
    scanf("%ld", &n);
    printf("\n Value of x is :- ");
    scanf("%ld",&x);
    for(i=1;i<=n;i++)
      {
          f=fact(i);
          // sum =sum +(power(x,i)/f);
          if((int)i%2==1)
            sum =sum +(power(x,i)/f);
          else
           sum =sum -(power(x,i)/f);
      }
      // sum=sum+1;
    printf("\nSum of series is :- %lf", sum);
    return 0;
  }
double power(long n, long p)
  {
    long int i;
    double power=1;
    for(i=1;i<=p;i++)
      {
        power=power*n;
      }
    return power;
  }

double fact(long n)
  {
    long int i;
    double fact=1;
    for(i=1;i<=n;i++)
      {
        fact=fact*i;
      }
    return fact;
  }