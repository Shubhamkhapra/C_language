/* Write a program to print this pattern
	    1
     121
    12321
   1234321
		12321
		 121
			1
 Author:- Shubham Date:- Oct 27,2021 */
#include<stdio.h>
int main()
	{
    int  num,i,j,k;
    printf("Enter the  num :- ");
		scanf("%d",&num);
    for(i=1;i<=num;i++)
			{
        for(j=1;j<=num-i;j++)
					{
						printf(" ");
					}
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
    for(i=num-1;i>=1;i--)
      {
        for(j=0;j<=num-1-i;j++)
					{
						printf(" ");
					}
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