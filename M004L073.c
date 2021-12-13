/*Write a program enter a postive no find the binary equivalent of number . 
Author:- Shubham  Date:- 21 Nov,2021 */
#include<stdio.h>
long int bin(long int);
int main()
  {
    long int f=0,s=1,n;
    printf("Enter the number:- ");
    scanf("%ld",&n);
    if(n>0)
      {
        bin(n);
      }
    else
      printf("\nEnter a positive no \n");
    return 0;
  }
long int bin(long int n)
  {
    if(n>1)
      {
        bin(n/2);
      }
    printf(" %ld ",n%2);
    return 0;
  }