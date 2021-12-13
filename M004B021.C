//Write a program to calculate simple interest.
//Author : Shubham Khapra	 Date:- Oct 5,2021
#include<stdio.h>
#include<conio.h>
void main()
	{
		 int principle, no_of_year;
		 float rate_of_interest, simple_interest;
		 clrscr();
		 printf("Enter the principle :- ");
		 scanf("%d",&principle);
		 printf("\nEnter the Number of year :- ");
		 scanf("%d",&no_of_year);
		 printf("\nEnter the rate of interest is :- ");
		 scanf("%f",&rate_of_interest);
		 //Formula for calculate simple interest
		 simple_interest=principle*no_of_year*rate_of_interest/100;
		 printf("\nPrinciple is :- %d and No of year is %d and Rate of interest is  %.2f and Simple interest is %.2f",principle, no_of_year,rate_of_interest, simple_interest );
		 getch();
	}