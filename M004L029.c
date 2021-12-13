/*Write a program pto revese a number.
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
	 printf("\nEnter no is :-  %ld , Revese number  is:- %ld \n",org,rev);
	 getch();
  }