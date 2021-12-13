/* Write a program to print this pattern
1
21
123
4321
12345
 Author:- Shubham Date:- Oct 27,2021 */
#include<stdio.h>
int main()
	{
		int i,j,num;
		printf("Enter the  num :- ");
		scanf("%d",&num);

		for(i=1;i<=num;i++)
			{
        if(i%2>0)
          {
            for(j=1;j<=i;j++)
              {
                printf("%d",j);
              }
          }
        else
          {
            for(j=i; j>=1;j--)
              {
                 printf("%d",j);
              }
          }
				printf("\n");
			}
	}
