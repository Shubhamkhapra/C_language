//Convert Integer number into Octal number
//Author :- Shubham Khapra  Date:- oct , 2020
#include<stdio.h>
#include<conio.h>
int main()
   {
	int num, num1, remainder, Octal=0, index=1;
	printf("Enter the number:- ");
	scanf("%d",&num);
	num1=num;
	while (num1 !=0)
		{
			remainder = num1 %8 ;
			Octal = Octal + remainder*index;
			num1 = num1 / 8;
			index = index *10;
		}
	printf("\nInteger number is  :- %d  to Octal number :- %d ",num,Octal);
	
	getch();
	return 0;	
 }
