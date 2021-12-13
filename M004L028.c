/*Write a program enter any no and calculate factorial.
  Author:- Shubham Date:- Oct 19 ,2021 */

#include<stdio.h>

void main()
  {
	 long int i, num,fact=1;
	 
	 printf("Enter the Number:- ");
	 scanf("%ld",&num);
	 i=1;
	 while(i<=num)
		{
		  fact = fact * i;
		  i +=1;
		}
	 printf("Enter Value is :- %ld , Factorial  value is  :- %ld  \n", num,fact);
	 
  }
