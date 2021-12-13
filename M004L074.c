/*Write a program to recursive function to obtain the running sum of first 25 natural numbers.
Author:- Shubham  Date:- 20 Nov,2021 */
#include<stdio.h>
long int sum(long int);
int main()
  {
    long int n,Sum;
    printf("Enter the number:- ");
    scanf("%ld",&n);
    if(n>0)
      {
        Sum=sum(n);
        printf("\nSum of natural numbers %ld \n",Sum);
      }
    else
      printf("\nEnter a positive no \n");
    return 0;
  }
long int sum(long int n)
  {
    if(n==0)
      return n;
    n=n+sum(n-1);
    printf(" %ld ",n);
    return n; 
  }