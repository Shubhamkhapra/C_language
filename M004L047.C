/* Write a program to print this pattern
	 *
	**
  ***
 ****
*****
 Author:- Shubham Date:- Oct ,2021 */
#include<stdio.h>
#include<conio.h>
int main()
	{
		int i,j,k,num;
		clrscr();
		printf("Enter the  num :- ");
		scanf("%d",&num);
		for(i=1;i<=num;i++)
			{
				for(j=1;j<=num-i;j++)
					{
						printf(" ");
					}
				for(k=1;k<=i;k++)
					{
						printf("*");
					}
				printf("\n");
			}
		getch();
	 return 0;
	}
