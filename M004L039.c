//Display the  number count of positive, negative and zero�s entered.
//Author :- Shubham Khapra  Date:- Oct , 2020
#include<stdio.h>
#include<conio.h>
int main()
   {
	int  num , zero=0,positive=0, negative=0;
	char ch;
	
		do
		{
			printf("\nEnter the Number :-   ");
			scanf("%d",&num);
			if (num > 0)
				{
					positive++;
				}
			else
				{
					if(num<0)
						{
							negative++;
						}
					else
						{
							 zero++;		
						}
				}
			fflush(stdin);	
			printf("If yu want to continue press y else n =   ");
			scanf(" %c",&ch);	
		}while(ch=='y'|| ch=='Y');
	printf("\nZero number count :-   %d  \nPositive number count :-    %d \nNegative number count :-   %d", zero,positive,negative);
	
	getch();
	return 0;	
 }
