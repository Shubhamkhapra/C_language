/*Write a program to calculate a fibonacci series 
Author:- Shubham  Date:- 20 Nov,2021 */
#include<stdio.h>
long int fib(long int,long int,long int);
int main()
  {
    long int f=0,s=1,n;
    printf("Enter the number:- ");
    scanf("%ld",&n);
    if(n>0)
      {
        printf("%ld ",s);
        fib(f,s,n);
      }
    else
      printf("\nEnter a positive no \n");
    return 0;
  }
long int fib(long int f,long int s,long int n)
  {
    int num;
    if(n==0)
      return 1;
    num=f+s;
    f=s;
    s=num;
    printf(" %d ",num);
    fib(f,s,n-1);
  }