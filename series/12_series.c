/*1 3 8 15 27 50 92 169 311 */
#include<stdio.h>
int main()
  {
    int i,a=1,b=3,c=4,sum,n ;
    printf("Enter the range of number:- ");
    scanf("%d", &n);
    printf("%d %d ", a,b);
    for(i=4;i<=n;i++)
      {
          sum =a+b+c;
          printf(" %d ", sum);
          a =b;
          b=c;
          c=sum;  
      }
    
    return 0;
  }