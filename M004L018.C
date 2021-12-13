/*Write a program to determine whether the character entered is a capital letter, a small case letter, a digit or a special symbol.
	Author :- Shubham   Date:- 13 Oct, 2021 */

#include<conio.h>
void main()
 {
		char ch;
		clrscr();
		printf("Enter any character or symbol:- ");
		scanf("%c",&ch);
		  if ((ch >= 97 && ch <= 122))
				 {
					printf ("\n%c Character is a SMALL LETTER ", ch);
				 }
		  else if (ch >= 65 && ch <= 90)
			 {
				printf ("\n%c Character is a CAPITAL LETTER", ch);
			 }
		  else if ((ch >= 48) && (ch <= 57))
			 {
				printf ("\n%c Character is a NUMBER", ch);
			 }
		  else
			 {
				printf ("\n%c Character is SPECIAL SYMBOL", ch);
		    }
		getch();
	}
