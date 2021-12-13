/*Write a program  calculate sum of digits of number.
  Author:- Shubham Date:- Nov 9 ,2021 */

#include<stdio.h>
long int numSum(long int);
int main()
  {
	 long int num, org, total;
	 printf("Enter a number:- ");
	 scanf("%ld",&num);
	 org=num;
	 total=numSum(num);
	 printf("\nEnter no is :-  %ld , Sum  is:- %ld \n",org,total);
	 
  }
long int numSum(long int num)
  {
    long int org,sum=0,rev=0;
    while(num>0)
      {
        rev=num%10;
        sum +=rev;
        num=num/10;
      }
    return sum;
  }