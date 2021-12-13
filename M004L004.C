/* Write a program enter temperature of city in fahrenheit and calculate centigrade temp.
	Author:- Shubham Khapra Date:- Oct 6,2021 */
#include<conio.h>
void main()
	{
		float fahre_temp, centi_temp;
		clrscr();
		printf("Enter the  Temperature of city in fahrenheit :- ");
		scanf("%f",&fahre_temp);
		centi_temp= (fahre_temp - 32)*5/9;
		printf("\nFahrenheit temperature of city is %.2f and centigrade Temp is  %.2f ",fahre_temp, centi_temp);
		getch();
	}