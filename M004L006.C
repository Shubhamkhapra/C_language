/* Write a program to swap two numbers .
	Author:- Shubham Khapra Date:- Oct 6,2021 */
#include<conio.h>
void main()
	{
		int num1, num2, swap;
		clrscr();
		printf("Enter the first number :- ");
		scanf("%d",&num1);
		printf("\nEnter the Second number :- ");
		scanf("%d",&num2);
		printf("\nBefore Swap first no is %d and second no is %d",num1,num2);
		swap=num1;
		num1=num2;
		num2=swap;
		printf("\nAfter Swap first no is %d and second no is %d",num1,num2);
		getch();

	}