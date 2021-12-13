/* Write a program to print this pattern
1
121
1231
1234321
 Author:- Shubham Date:- Oct 27,2021 */
#include<stdio.h>

int main()
	{
		int i,j,k,num;
		
		printf("Enter the  num :- ");
		scanf("%d",&num);

		for(i=1;i<=num;i++)
			{
				for(j=1;j<=i;j++)
					{
						printf("%d",j);
					}
				for(k=i;k>1;k--)
					{
						printf("%d",k-1);
					}
				printf("\n");
			}
		

	}
