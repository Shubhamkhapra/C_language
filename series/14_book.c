/* x-1/x + 1/2(x-1/x)^2 + 1/2(x-1/x)^3 + 1/2(x-1/x)^4 ... */
#include<stdio.h>
double power(double, double);
int main()
  {
    double i,j,x, n,term,sol ,sum;
    printf("\nEnter the number of terms :- ");
    scanf("%lf",&n);
    printf("\nEnter the value of x :- ");
    scanf("%lf",&x);
    term = (x-1)/x;
    sum =term;
    // printf("\n power check serires %lf ",power(term,5));
    for(i=1;i<=n;i++)
      {
        sol=power(term,i)/2;
        // printf("\nsol %lf \n",sol);
        sum +=sol;
      }
    printf("\nsum value is :- %lf ",sum);
  }
double power(double x, double n)
  {
    int i,p=1;
    for(i=1;i<=n;i++)
      {
        p=p*x;
      }
    return p;
  }