/* Write a program to enter five number and sum of all digits .
	Author:- Shubham Khapra Date:- Oct 6,2021 */
#include<conio.h>
void main()
	{
		long int  num,n, d1,d2,d3,d4,d5,sum;
		clrscr();
		printf("Enter the Five digit number :- ");
		scanf("%ld", &num);
		n=num;
		d1=num/10000;
		num=num%10000;
		d2=num/1000;
		num=num%1000;
		d3=num/100;
		num=num%100;
		d4=num/10;
		num=num%10;
		d5=num;
		sum=d1+d2+d3+d4+d5;
		printf("\nFive digit no is :- %ld and sum of five digit is %ld ",n,sum);
		getch();

	}
