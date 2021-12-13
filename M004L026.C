/*Write a program print a smiling face.
  Author:- Shubham Date:- Oct 19 ,2021 */

#include<stdio.h>
#include<conio.h>
void main()
	{
		int i, smiling=1;
		clrscr();
		i=1;
		while(i<=2000)
			{
				printf("%c",smiling);
				i +=1;
			}
		getch();
	}