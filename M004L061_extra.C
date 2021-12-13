/* Write a program to print this pattern
           1
         1   1
       1   2   1
     1   3   3    1
   1  4    6   4   1
 1  5   10   10  5   1
 Author:- Shubham Date:- Oct ,2021 */

#include <stdio.h>
int main() {
	 int num,i,j,p=1;
	 printf("Enter the number of rows: ");
	 scanf("%d", &num);
	 for (i = 0; i < num; i++) {
			for (j=1;j<=num-i; j++)
				 printf("  ");
			for (j = 0; j <= i; j++)
			{
				 if (j == 0 || i == 0)
						{
							p = 1;
							printf("\n i value is %d j value is %d \n",i,j);
						}
				 else
				 	{
						p = p * (i - j + 1) / j;
						printf("\n i value is %d j value is %d \n",i,j);
					 }

				 printf("%4d", p);
			}
			printf("\n");
	 }
	 return 0;
}