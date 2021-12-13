/*Write a program find whether the sum of a digit of a number is palindrome or not return result o and 1
Author:- Shubham  Date:- 29 Nov, 2021 */
#include<stdio.h>
// #include<conio.h>
long int con(long int);
int main()
	{
		long int num, n,digit;
		// clrscr();
		printf("\nEnter the integer number :- \n");
		scanf("%ld",&num);
		n=con(num);
		if(n)
			{
				printf(" %ld ",n);
			}
		else
			{
				printf(" %ld", n);
			}
		// getch();
		return 0;
	}
long int con(long int num)
	{
		long int rev=0, sum=0, revs=0, check;
		while(num!=0)
			{
				sum = sum +num%10;
				num=num/10;
			}
		check=sum;
		while(sum!=0)
			{
				revs =(revs*10)+ sum%10;
				sum=sum/10;
			}
		if(check==revs)
			{
				return 1;
			}
		else
			{
				return 0;
			}
		
	}
