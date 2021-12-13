/* Write a program to print this pattern
	    *
     ***
    *****
   *******
		*****
		 ***
			*
 Author:- Shubham Date:- Oct 27,2021 */
#include<stdio.h>
int main()
	{
    int  num,i,j;
    printf("Enter the  num :- ");
		scanf("%d",&num);
    for(i=1;i<=num;i++)
			{
        for(j=1;j<=num-i;j++)
					{
						printf(" ");
					}
        for(j=i;j>=1;j--)
          {
            printf("%d",j);
          }
          for(j=2;j<=i;j++)
            {
              printf("%d",j);
            }
        printf("\n");
      }
    for(i=num-1;i>=1;i--)
      {
          for(j=0;j<=num-1-i;j++)
					{
						printf(" ");
					}
         for(j=i;j>=1;j--)
          {
            printf("%d",j);
          }
         
          for(j=2;j<=i;j++)
            {
              printf("%d",j);
            }
        printf("\n");
      }

  }