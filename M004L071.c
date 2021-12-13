/*Write a program enter a positive number find  prime factors of numbers.
Author = Shubham  Date:- Nov 20,2021 */
#include<stdio.h>
long int factor(long int );
int main()
  {
    long int num, fact;
     printf("Enter the number:- \n");
     scanf("%ld",&num);
     if(num>0)
      {
        fact=factor(num);
      }
    else
      {
        printf("Enter numbers are not positive number ");
      }
     
    return 0 ;
  }   
long int factor(long int num)
  {
    long int i;
    for(i=2;num>1;i++)
      {
        while(num%i==0)
          {
            printf(" %ld ",i);
            factor(num /=i);
          }
      }
    return 0;
  }