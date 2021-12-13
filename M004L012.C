/* Write a program to calculate profit and loss.
	Author:- Shubham Date:- Oct 11,2021 */
#include<conio.h>
void main()
	{
		float selling_price, actual_price;
		clrscr();
		printf("Enter the Actual Price ");
		scanf("%f",&actual_price);
		printf("Enter the Selling  Price ");
		scanf("%f",&selling_price);
			if(selling_price-actual_price>0)
				{
					printf("\nSeller has made profit :- %.2f ",selling_price-actual_price);
				}
			else
				{
					if(selling_price-actual_price<0)
						{
							printf("\nSeller has losse :- %.2f ",selling_price-actual_price);
						}
					else
						{
							printf("\nSeller has No profit and loss ");
						}
				}
		getch();
	}