//Write a program enter basic salary and calculate gross salary of employee.
//Author : Shubham Khapra	 Date:- Oct 5,2021
#include<stdio.h>
#include<conio.h>
void main()
	{
		 float basic_salary, dearness_allownace, house_rent, gross_salary;
		 clrscr();
		 printf("Enter basic salary of employee:- ");
		 scanf("%f",&basic_salary);
		 dearness_allownace = basic_salary * 0.4;
		 house_rent =  basic_salary * 0.2;
		 //Formula for calculate gross salary of employee
		 gross_salary = basic_salary+dearness_allownace+house_rent;
		 printf("\nBasic salary of employee is %.2f and Gross salary of employee is %.2f ", basic_salary, gross_salary);
		 getch();

		}