/*Write a program to enter 3 digit no and check number is armstrong or not.
  Author:- Shubham Date:- Oct 19,2021 */

#include<stdio.h>
#include<conio.h>
void main()
	{
		int armstrong=0, num, rem,original,i;
		clrscr();
		printf("Enter the number :- ");
		scanf("%d",&num);
		original=num;
		while(num!=0)
			{
				rem=num%10;
				armstrong =armstrong + rem*rem*rem;
				num /=10;
			}

			if(original==armstrong)
				{
					printf("\nEnter no is :- %d are armstrong number :- %d ",original,armstrong);
				}
			else
				{
					printf("\nEnter no is :- %d are Not armstrong number :- %d ",original,armstrong);
				}

		getch();
	}