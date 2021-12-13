/*Write a program to check a number is prime or not prime.
  Author:- Shubham Date:- Oct 19,2021 */
#include<stdio.h>
int main()
	{
		int num,i;
    printf("Enter a number:- ");
    scanf("%d",&num);
    for(i=2;i<num;i++)
      {
        if(num%i==0)
          {
            break;
          }
      }
    if(i==num)
      printf("Enter number  is %d is a prime number ",num);
    else
      printf("Enter number  is %d is  Not  a  prime number ",num);
  }