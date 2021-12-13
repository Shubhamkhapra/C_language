/* Write a program to print this pattern
****1
***12
**123
*1234
12345
 Author:- Shubham Date:- Oct 27,2021
  */
#include<stdio.h>
int main()
	{
		int i,j,num;
		printf("Enter the  num :- ");
		scanf("%d",&num);

		for(i=1;i<=num;i++)
			{
        for(j=1;j<=num-i;j++)
					{
						printf("*");
					}
        for(j=1;j<=i;j++)
					{
						printf("%d",j);
					}
				printf("\n");
			}
	}
