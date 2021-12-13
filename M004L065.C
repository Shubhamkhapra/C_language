/*Write a program to create a function and  find value of one number raised to power another .
  Author:- Shubham Date:- Nov 9 ,2021 */
int calPower(int, int );
#include<stdio.h>
#include<conio.h>
int main()
	{
	 int num1,num2,power=1, i, calpower;
	 clrscr();
	 printf("Enter a Number One:- ");
	 scanf("%d",&num1);
	 printf("Enter a Number Second:- ");
	 scanf("%d",&num2);
	 calpower = calPower(num1,num2);
	 printf("\nEnter Number 1 is :-  %d , Number  2 is :- %d , Power value is  :- %d \n",num1,num2,calpower);
	 getch();
	 return 0;
  }

int calPower(int num, int num2)
  {
    int i=1;
    int power=1;
    while(i<=num2)
      {
        power = power * num;
        i +=1;
      }
    return power;
  }