#include<stdio.h>
int digit(int);
int main()
  {
    int i,sum,org,div,n;
    printf("Enter the sum :- ");
    scanf("%d",&sum);
    for(i=1;i<=500;i++)
      {
        int sum1=0;
        n=i;
        while(n>0)
          {
            div=n%10;
            sum1 = sum1+div;
            n=n/10;
          }
        //sum1=digit(n);
        if(sum==sum1)
          {
            printf("\nnumber is %d and sum is %d\n",i,sum1);
          }
        
      }
  }
int digit (int n)
  {
    int div,sum1;
    while(n>0)
      {
        div=n%10;
        sum1=sum1+div;
        n=n/10;
      }
    return sum1;
  }