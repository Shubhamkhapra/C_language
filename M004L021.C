//Write a program to Library charges per day fine for every book returned late.
//Author :- Shubham Khapra  Date:- 12 Oct, 2021

#include<conio.h>
void main()
 {
		float days;
		clrscr();
		printf("\nEnter the days you have return books for library ");
		scanf("%f",&days);
			if (days>30)
				{
					printf("\nYour membership is cancled for library");
				}
			else
				{
					if (days>=10)
						{
							printf("\nYou have return %.0f days later Your fine is %.2f ",days,(days-10)*5+7.50);
						}
					else
						{
							if(days>=5 && days<=10)
								{
									printf("\nYou have return %.0f days later Your fine is %.2f ",days,(days-5)*1+2.50);
								}
							else
								{
									printf("\nYou have return %.0f days later Your fine is %.2f ",days,days*0.50);
								}
						}
				}
		getch();
 }
