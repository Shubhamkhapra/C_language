/* Write a program to find out three person who is the youngest.
	Author:- Shubham Date:- Oct 13,2021 */
#include<conio.h>
void main()
	{
		int ram,shyam,ajay;
		clrscr();
		printf("Enter the age of Ram:- ");
		scanf("%d",&ram);
		printf("Enter the age of Shyam:- ");
		scanf("%d",&shyam);
		printf("Enter the age of Ajay:- ");
		scanf("%d",&ajay);
			if(ram>0 && shyam>0 && ajay>0)
				{
					if(ram==shyam && shyam==ajay)
						{
							printf("\nAll three age are equal");
						}
					else
						{
							if(ram<shyam)
								{
									if(ram<ajay)
										{
											printf("\nRam is the youngest");
										}
									else
										{
											printf("\nAjay is the youngest");
										}
								}
							else
								{
									if(shyam<ajay)
										{
											printf("\nShyam is the youngest");
										}
									else
										{
											printf("\nAjay is the youngest");
										}
								}
						}
				}
			else
				{
					printf("\nPerson age's cannot be nagtive ");
				}
		getch();
	}