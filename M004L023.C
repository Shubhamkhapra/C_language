//Write a program to company, worker efficiency is determined on the basis of the time required for a worker to complete a particular job.
//Author :- Shubham   Date:- 12 Oct, 2021

#include<stdio.h>
void main()
 {
		int  hours;
		printf("\nEnter the hours to completed your work ");
		scanf("%d",&hours);
			if(hours>2 && hours<=10)
				{
					printf("\nWorker has completed work %d worker is highly efficent", hours);
				}
			else
				{
					if(hours>10 && hours<=20)
						{
							printf("\nWorker has completed work %d worker orderd to improve speed", hours);
						}
					else
						{
							if(hours>20 && hours<=30)
								{
									printf("\nWorker has completed work %d worker is given traning to improve his speed", hours);
								}
							else
								{
									printf("\nWorker has completed work %d worker  has to leave the company ", hours);
								}
						}
				}
 }
