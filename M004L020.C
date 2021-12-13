//Write a program to check character is vowel or consontant or any other non-alphabets
//Author :- Shubham   Date:- 12 Oct, 2021

#include<conio.h>
void main()
 {
		char ch;
		clrscr();
		printf("Enter the any character ");
		scanf("%c", &ch);
			if((ch>=97 && ch<=122) || (ch>=65 && ch<=90))
				{
					if ((ch == 'a' || ch == 'i' || ch=='o' || ch == 'u' || ch== 'e') || (ch == 'A' || ch == 'I' || ch=='O' || ch == 'U' || ch== 'E') )
						{
							printf("\nEnter character %c  is Vowel",ch);
						}
					else
						{
							printf("\nEnter character %c  is Consonant",ch);
						}
				}
			else
				{
					printf("\nEnter character %c is non-alphabets character",ch);
				}

		 getch();
 }
