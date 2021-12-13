/*Write a program to check number is palindrome or not .
  Author:- Shubham Date:- Oct 19 ,2021 */

#include<stdio.h>
#include<conio.h>
void main()
  {
	 long int num, rev=0, org;
	 clrscr();
	 printf("Enter a number:- ");
	 scanf("%ld",&num);
	 org=num;
	 while(num>0)
		{
		  rev=(rev*10)+(num%10);
		  num=num/10;
		}
	 if(rev==org)
		{
		  printf("\nEnter no is :-  %ld , Number is Palindrome:- %ld \n",org,rev);
		}
	 else
		{
		  printf("\nEnter no is Not  Palindrome");
		}
	 getch();
  }