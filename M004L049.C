/* Write a program to print this pattern
**********
 ********
  *****
	***
	 *
 Author:- Shubham Date:- Oct 27,2021 */
#include<stdio.h>

int main()
	{
		int i,j,k,num,star;
		
		printf("Enter the  num :- ");
		scanf("%d",&num);
		star =1+(num-1)*2;
		for(i=1;i<=num;i++)
			{
				for(j=1;j<=i;j++)
					{
						printf(" ");
					}
				for(k=1;k<=star;k++)
					{
						printf("*");
					}
				star -=2;
				printf("\n");
			}
		

	}
