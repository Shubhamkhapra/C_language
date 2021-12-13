/* Write a program to print this pattern
    1
   2 3
  3 4 5
 4 5 6 7

 Author:- Harshit  Date:- Oct 28 ,2021
  */
#include<stdio.h>
int main()
	{
		int row,j,value=1,num;
		printf("Enter the  num :- ");
		scanf("%d",&num);
    for(row=1;row<=num;row++)
			{
				for(j=1;j<=num-row;j++)
					{
						printf("  ");
					}
          for(j=1;j<=row;++j)
            {
              printf("%4d",value);
              ++value;
            }
        printf("\n");
      }
  }

