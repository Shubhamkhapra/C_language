/*Write a program print character.
  Author:- Shubham Date:- Oct 19 ,2021 */

#include<stdio.h>
#include<conio.h>
void main()
  {
	 int i;
	 clrscr();
	 i=0;
	 while(i<=255)
		{
		  printf("Value is :- %d , Character value is  :- %c \n", i,i);
		  i +=1;
		  getch();
		}

  }