/*Write a program to find value of one number raised to power another .
  Author:- Shubham Date:- Oct 19 ,2021 */

#include<stdio.h>
#include<conio.h>
void main()
  {
	 int num1,num2,power=1, i;
	 clrscr();
	 printf("Enter a Number One:- ");
	 scanf("%d",&num1);
	 printf("Enter a Number Second:- ");
	 scanf("%d",&num2);
	 i=1;
	 while(i<=num2)
		{
		  power = power * num1;
		  i +=1;
		}
	 printf("\nEnter Number 1 is :-  %d , Number  2 is :- %d , Power value is  :- %d \n",num1,num2,power);
	 getch();
  }