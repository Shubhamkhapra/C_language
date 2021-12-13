/* Write a program to enter a  positive number and sum of digits using recursion 
  Author:- Shubham Date:- Nov 20,2021 */
#include<stdio.h>
long int sum(long int);
int main()
  {
    long int n,i,sumSeries;
    printf("Enter the  number :-  \n");
    scanf("%ld",&n);
    if(n>0)
      {
        sumSeries=sum(n);
        printf("\nSum of digit is :- %ld \n",sumSeries);
      }
    else 
      {
        printf("\nEnter a postive number\n");
      }
    return 0;
  }
long int sum(long int n)
  {
    if(n==0)
      return 0;
    else
      {
        return n%10+sum(n/10);
      }
    return 0;
  }