/*Write a program to check if credit pay and stock avaliable send the supply .
	Author :- Shubham   Date:- 14 Oct, 2021 */

#include<conio.h>
void main()
	{
		int stock,credit,order;
		clrscr();
		printf("Enter the Stock :- ");
		scanf("%d",&stock);
		printf("Enter the Order :- ");
		scanf("%d",&order);
		printf("Enter the Credit (you can credit any balance) :- ");
		scanf("%d",&credit);
			if(credit!=0&&order<=stock)
				{
					printf("\nSupply Item is %d ",order);
				}
			else if(credit!=0&&order>stock)
				{
					printf("\nAvailable item wil be supply  quantity is %d ", order-stock);
				}
			else
				{
					printf("\nNo supply ");
				}
		getch();
	}