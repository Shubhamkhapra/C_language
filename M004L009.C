
/* Write a program to enter four digit number and sum of first and last digit.
	Author:- Shubham Khapra Date:- Oct 6,2021 */
#include<conio.h>
void main()
	{
		long int num,n, d1,d4,sum;
		clrscr();
		printf("Enter the Four digit number :- ");
		scanf("%ld", &num);
		n=num;
		d1=num/1000;
		num=num%1000;
		d4=num%10;
		sum=d1+d4;
		printf("\nFour digit no is :- %ld and Sum of first and last No is:- %ld ",n,sum);
		getch();

	}
