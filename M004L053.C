/* Write a program to print this pattern
1
01
101
0101
10101
 Author:- Shubham Date:- Oct 27,2021 */
#include<stdio.h>
int main()
		{
		int i,j,num;
		printf("Enter the  num :- ");
		scanf("%d",&num);

		for(i=1;i<=num;i++)
			{
				for(j=1;j<=i;j++)
					{
						if((i+j)%2==1)
							{
								printf("0");
							}
						else
							{
								printf("1");
							}
					}
				printf("\n");
			}
	}