//Write a program to calculate simple interest.
//Author : Shubham Khapra	 Date:- Oct 5,2021
#include<stdio.h>
#include<conio.h>
void main()
	{
		 int principle, no_of_year;
		 float rate_of_interest, simple_interest;
		 clrscr();
		 principle=1000;
		 no_of_year= 3;
		 rate_of_interest=8.5;
		 //Formula for calculate simple interest
		 simple_interest=principle*no_of_year*rate_of_interest/100;
		 printf("\nPrinciple is :- %d and No of year is %d and rate of interest is  %.2f and Simple interest is %.2f",principle, no_of_year,rate_of_interest, simple_interest );
		 getch();
	}