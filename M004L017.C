/* Write a program to check Leap year or not.
	Author:- Shubham Date:- Oct 13,2021 */
#include<conio.h>
void main()
	{
		int year;
		clrscr();
		printf("Enter the Year ");
		scanf("%d",&year);
			if(year%4==0)
				{
					if(year%100==0)
						{
							if(year%400==0)
								{
									printf("\nEnter %d year is  leap year",year);
								}
							else
								{
									printf("\nEnter %d year is  Not a leap year",year);
								}
						}
					else
						{
							printf("\nEnter %d year is leap year",year);
						}
				}
			else
				{
					printf("\nEnter %d year is  Not a leap year",year);
				}
		getch();
	}