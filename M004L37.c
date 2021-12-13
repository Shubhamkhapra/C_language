//Convert Decimal number into Binary number
//Author :- Shubham Khapra  Date:- Oct, 2020
#include<stdio.h>
#include<conio.h>
int main()
   {
	int num, num1, remainder, binary=0, index=1;
	printf("Enter the number:- ");
	scanf("%d",&num);
	num1=num;
	while (num1 !=0)
		{
			remainder = num1 %2 ;
			binary = binary + remainder*index;
			num1 = num1 / 2;
			index = index *10;
		}
	printf("\nDecimal number is  :- %d  to Binary number :- %d ",num,binary);
	
	getch();
	return 0;	
 }
